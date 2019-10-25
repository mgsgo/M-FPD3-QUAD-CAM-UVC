#image stitching code from https://www.pyimagesearch.com/2018/12/17/image-stitching-with-opencv-and-python/

import numpy as np
import argparse
import imutils
import cv2

capture = cv2.VideoCapture(0)
fourcc = cv2.VideoWriter_fourcc(*'JPEG')
capture.set(cv2.CAP_PROP_FRAME_WIDTH, 7680)
capture.set(cv2.CAP_PROP_FRAME_HEIGHT, 1080)

file_number = 0
image_stitch_count = 0
stitch_crop = 0;

images = []
stitcher = cv2.createStitcher() if imutils.is_cv3() else cv2.Stitcher_create()

while True:
	ret, frame = capture.read()
	image = frame.copy()
	image_1 = image[0:1080,	0:1920-4]		#last 4pixels black
	image_2 = image[0:1080, 1920:3840-4]	#last 4pixels black
	image_3 = image[0:1080, 3840:5760-4]	#last 4pixels black
	image_4 = image[0:1080, 5760:7680-4]	#last 4pixels black

	image_1 = cv2.resize(image_1, (960-2, 540))	#last 2pixels black
	image_2 = cv2.resize(image_2, (960-2, 540))	#last 2pixels black
	image_3 = cv2.resize(image_3, (960-2, 540))	#last 2pixels black
	image_4 = cv2.resize(image_4, (960-2, 540))	#last 2pixels black

	file_number = file_number +1
	file_save_en = file_number % 15
	
	if file_save_en == 1:
		images.append(image_1)		#add camera 1 images
		images.append(image_2)		#add camera 2 images
		images.append(image_3)		#add camera 3 images
		images.append(image_4)		#add camera 4 images
		image_stitch_count = image_stitch_count +1
		print("[INFO] stitching images..." + "image_stitch_count=" + str(image_stitch_count))
		(status, stitched) = stitcher.stitch(images)
		
		if stitch_crop == 1:
			stitched = cv2.copyMakeBorder(stitched, 10, 10, 10, 10,
			cv2.BORDER_CONSTANT, (0, 0, 0))
			gray = cv2.cvtColor(stitched, cv2.COLOR_BGR2GRAY)
			thresh = cv2.threshold(gray, 0, 255, cv2.THRESH_BINARY)[1]
			cnts = cv2.findContours(thresh.copy(), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
			cnts = imutils.grab_contours(cnts)
			c = max(cnts, key=cv2.contourArea)
			mask = np.zeros(thresh.shape, dtype="uint8")
			(x, y, w, h) = cv2.boundingRect(c)
			cv2.rectangle(mask, (x, y), (x + w, y + h), 255, -1)
			minRect = mask.copy()
			sub = mask.copy()
			while cv2.countNonZero(sub) > 0:
				minRect = cv2.erode(minRect, None)
				sub = cv2.subtract(minRect, thresh)
			cnts = cv2.findContours(minRect.copy(), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
			cnts = imutils.grab_contours(cnts)
			c = max(cnts, key=cv2.contourArea)
			(x, y, w, h) = cv2.boundingRect(c)
			stitched = stitched[y:y + h, x:x + w]
		
		cv2.imshow("stitched", stitched)

		images.remove(image_1)		#delete camera 1 images
		images.remove(image_2)		#delete camera 1 images
		images.remove(image_3)		#delete camera 1 images
		images.remove(image_4)		#delete camera 1 images


		cv2.imwrite('960x540_'+str(file_number).zfill(6)+'_cam1.jpg',image_1)
		cv2.imwrite('960x540_'+str(file_number).zfill(6)+'_cam2.jpg',image_2)
		cv2.imwrite('960x540_'+str(file_number).zfill(6)+'_cam3.jpg',image_3)
		cv2.imwrite('960x540_'+str(file_number).zfill(6)+'_cam4.jpg',image_4)
		cv2.imwrite('960x540_'+str(file_number).zfill(6)+'_stitchined_cam123.jpg',stitched)


	cv2.imshow("video1", image_1)
	cv2.imshow("video2", image_2)
	cv2.imshow("video3", image_3)
	cv2.imshow("video4", image_4)

	#writer_1.write(image)

	if cv2.waitKey(1) > 0: break

capture.release()
cv2.destroyAllWindows()