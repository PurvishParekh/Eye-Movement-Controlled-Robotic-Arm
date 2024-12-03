![AU_logo](https://github.com/user-attachments/assets/35cf4245-737e-4211-a2aa-9aad0ab9cfbb)


*ENR107 Digital Electronics and Microprocessors*

*2024-2025 (Monsoon Semester)*

**Final Project README**

Submitted to faculty: Prof. Maryam Kaveshgar

Date of submission: 03-12-2024

**Group Number 2**

| Roll No. | Name of the Student | Contribution |
| :---: | :---: | :---: |
| **AU2340254** | **Hetanshu Parmar** | **Code \+ Hardware** |
| **AU2340045** | **Tarjani Patel** | **Code \+ Hardware** |
| **AU2340128** | **Purvish Parekh** | **Code \+ Hardware** |
| **AU2340001** | **R. Priscilla** | **Code \+ Hardware** |

### **README for Eye Movement Controlled Robotic Arm**

---

## **Introduction**

This project will incorporate a robotic arm using servo motors that can be controlled using the users's eye movements, as it will be capable of detecting and interpreting the eye movements accordingly. The system will track the user’s gaze, which will be translated into commands for controlling the robots’s movements through a servo motor, which is performed using camera and image processing algorithms. Arduino Uno will process the camera data and direct the servo motors accordingly. The direction and intensity of the eye gaze are used to control the robot’s movements precisely. The suggested system has numerous potential uses, primarily emphasizing assistive technology for people with motor disabilities.

---

## **Getting Started**

### **Prerequisites**

List what is needed to work with this prototype:

* Software: Python 3.11.9, Arduino IDE  
* Libraries or dependencies: Mediapipe, CV2, Numpy, Math, Time, PySerial  
* Any specific hardware requirements: Not applicable

### **Installation**

Steps to set up the prototype:

**Eg: Clone the Repository:**

`git clone [GitHub Repository URL]`  

`cd [repository-folder-name]`  

1. **Install Dependencies:**

   For Python projects

   `pip install opencv-python`

   `pip install mediapipe`

   `pip install numpy`

   `pip install pyserial`

 

---

## **How to Run**

Explain how to start the prototype:

Command to run the prototype:  
`python eye_control_ball.py`  

1. First, upload the Arduino IDE Code in the Arduino Uno.

2. Before running the Python program, the ‘COM’ port from which the Arduino Uno is connected should be specified at line 9 in the Python file(e.g. ‘COM12’ here).

---


[image1]: <data:image/png;base64,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>
