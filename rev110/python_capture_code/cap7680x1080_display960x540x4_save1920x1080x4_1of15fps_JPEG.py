import cv2

capture = cv2.VideoCapture(0)
fourcc = cv2.VideoWriter_fourcc(*'JPEG')
capture.set(cv2.CAP_PROP_FRAME_WIDTH, 7680)
capture.set(cv2.CAP_PROP_FRAME_HEIGHT, 1080)

file_number = 0

while True:
	ret, frame = capture.read()
	image = frame.copy()
	image_1 = image[0:1080,	0:1920]
	image_2 = image[0:1080, 1920:3840]
	image_3 = image[0:1080, 3840:5760]
	image_4 = image[0:1080, 5760:7680]

	file_number = file_number +1
	file_save_en = file_number % 15

	if file_save_en == 1:
		cv2.imwrite('1920x1080_'+str(file_number).zfill(6)+'_cam1.jpg',image_1)
		cv2.imwrite('1920x1080_'+str(file_number).zfill(6)+'_cam2.jpg',image_2)
		cv2.imwrite('1920x1080_'+str(file_number).zfill(6)+'_cam3.jpg',image_3)
		cv2.imwrite('1920x1080_'+str(file_number).zfill(6)+'_cam4.jpg',image_4)

	image_1 = cv2.resize(image_1, (960, 540))
	image_2 = cv2.resize(image_2, (960, 540))
	image_3 = cv2.resize(image_3, (960, 540))
	image_4 = cv2.resize(image_4, (960, 540))

	cv2.imshow("video1", image_1)
	cv2.imshow("video2", image_2)
	cv2.imshow("video3", image_3)
	cv2.imshow("video4", image_4)

	#writer_1.write(image)

	if cv2.waitKey(1) > 0: break

capture.release()
cv2.destroyAllWindows()