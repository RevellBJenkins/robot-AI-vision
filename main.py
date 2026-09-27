import cv2

# Open the Innomaker USB camera.
# Camera index 2 corresponds to /dev/video2 on this computer.
camera = cv2.VideoCapture(2)

# Verify that OpenCV successfully opened the camera.
if not camera.isOpened():
    print("Error: Could not open camera.")
    exit()

# Continuously capture frames until the user quits.
while True:

    # Read one frame from the camera.
    # success = True if a frame was captured successfully.
    # frame = the actual image captured by the camera.
    success, frame = camera.read()

    # Stop the program if OpenCV fails to capture a frame.
    if not success:
        print("Error: Could not capture frame.")
        break

    # Display the current frame in a window.
    cv2.imshow("Robot Vision", frame)

    # waitKey(1) waits briefly for a keyboard input.
    # If the user presses 'q', exit the video loop.
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Release the camera so other programs can use it.
camera.release()

# Close any windows created by OpenCV.
cv2.destroyAllWindows()