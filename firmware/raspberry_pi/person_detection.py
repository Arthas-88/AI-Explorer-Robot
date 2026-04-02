import cv2
from ultralytics import YOLO
MODEL_PATH = ""
model = YOLO(MODEL_PATH)

cap = cv2.VideoCapture(0)

if not cap.isOpened():
    print("ERROR: Camera not found")
    exit()

print("Camera started...")

while True:
    ret, frame = cap.read()
    if not ret:
        print("ERROR: Frame not received")
        break

    results = model(frame, verbose=False)

    person_detected = False

    for r in results:
        for box in r.boxes:
            cls_id = int(box.cls[0])

            if cls_id == 0:
                person_detected = True
    if person_detected:
        print("Person detected")
    else:
        print("No person")

    annotated = results[0].plot()
    cv2.imshow("AI Camera", annotated)

    if cv2.waitKey(1) & 0xFF == ord("q"):
        break

cap.release()
cv2.destroyAllWindows()