import cv2
from pkg_resources import fixup_namespace_packages

face_cascade = cv2.CascadeClassifier(
    "/Users/anandkunalmishra/DS&Algo/cascade.xml")

img = cv2.imread("/Users/anandkunalmishra/Downloads/elon musk.jpeg", 1)

gray_image = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

faces = face_cascade.detectMultiScale(
    gray_image, scaleFactor=1.05, minNeighbors=5)

print(type(faces))
print(faces)

for x, y, w, h in faces:
    img = cv2.rectangle(img, (x, y), (x+w, y+h), (0, 255, 0), 3)

resized = cv2.resize(img, int(img.shape[1]), int(img.shape[0]))

cv2.imshow("Grey", resized)
cv2.waitKey(0)

cv2.destroyAllWindows()
