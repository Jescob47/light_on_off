# light_on_off
Turn on or off the light of your room using Blynk

How to connect the ESP32 with the Servo
![Conexion](https://user-images.githubusercontent.com/71473111/153724619-dce3ba63-23fb-4d8e-b0ea-14ce8d4caf3f.png)

1) Download Blynk in you celphone 
2) Create your account

![image](https://user-images.githubusercontent.com/71473111/153725055-53dfc3eb-76d5-4e85-a6e0-6b772b229d30.png)

3) Create a new proyect

![image](https://user-images.githubusercontent.com/71473111/153725085-16c0c3a5-e35a-4695-b996-7f6ed3ecf8b7.png)

4) Put the name of the proyect and change the board to "ESP32 Dev Board"

![image](https://user-images.githubusercontent.com/71473111/153725143-c945d6a3-23c0-4248-a4d2-ffeb495fd04b.png)

5) You will recive a email where is a token serial, this serial will be used in the code.

![image](https://user-images.githubusercontent.com/71473111/153725227-fad29dfb-d2bf-458f-828b-4f4b1786d68b.png)

6) On the top-right side of the app is an add botton, there you have to add 3 sliders and one botton like in the image below:

![Screenshot_2022-02-12-13-31-39-635_cc blynk](https://user-images.githubusercontent.com/71473111/153725413-bd3b081a-919e-4407-a744-923c951a3e40.jpg)

7) Click on a slider and in output change from pin to virtual. Do it for the others slider and the botton. The name V0, V1, V2 and V3 is showed in the image to make sense with the code. V0 is the botton to move the servo, V1 is the top slider (range 85-105) this indicates de neutral position of the servo, V2 is the left slider (range 50-60) this indicates the maximun angle to turn the servo to the left and  V3 is the right slider (range 115-125) this indicates the maximun angle to turn the servo to the rigth. This sliders are used to correct the position of the servo when you assamble it to the wall, so it can switch the position of the switch.

![image](https://user-images.githubusercontent.com/71473111/153725613-9590ed77-a2e1-4a16-be5b-6e5badb090c3.png)

8) In the code, put you wifi name and the password

![image](https://user-images.githubusercontent.com/71473111/153725865-aa026d40-2e66-4c27-9adc-3509024cf151.png)

9) Plug the ESP32 and upload the code. In blynk, in the top right side is a play botton, click it and it will start the aplication. Is there is no problem, you can click con the V0 botton and the servo sould move and come back to the neutral position.




