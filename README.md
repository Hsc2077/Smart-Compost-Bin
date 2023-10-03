Smart-Compost-Bin
This project focuses on the use of DHT11 and soil humidity sensor backed by an Arduino board in order to create a smart composting system.

Problem Statement
The improper tracking of moisture levels and temperature during decomposition leading to improper formation of compost.

Idea
A device that measures and tracks various parameters required for proper decomposition.

Prototypes and rejected versions
Click https://drive.google.com/file/d/1NsjOQaT7277Kws2XYOTswzE_B9CkjLqm/view?usp=sharing for pictures.
Video Link- https://drive.google.com/file/d/196XE0vtusxOqqEp6j_u0zVQryOqMpwhY/view?usp=sharing

Final Project idea /Solution
An ESP  based device that checks Compost Moisture and outside temperature,humidity conditions to give recommendations to users using a mobile application.It also turns the compost in order for all of it to be exposed to oxygen and heat which increases the efficiency of the method and completely automates it.   

Objectives of the project
-Measure moisture and temperature of air
-Measure compost moisture
-Turn/Churn the compost in the bucket once a day
-Check the data with the ideal conditions required for compost
-Create the plan of action to compensate the difference
-Send the recommendations to a phone using a mobile application.




Block diagram based on objectives
Click https://drive.google.com/file/d/1j5rjSOnQol7ovM6j-cI9oslBV150rppe/view?usp=sharing for pictures



List of materials needed
1)Node MCU-ESP8266 Module -  Link https://www.amazon.in/Lolin-NodeMCU-ESP8266-CP2102-Wireless/dp/B010O1G1ES/ref=sr_1_4?crid=2I72FWKT93W8Q&keywords=esp8266&qid=1696227403&sprefix=esp8266%2Caps%2C271&sr=8-4#customerReviewshttps://www.amazon.in/Lolin-NodeMCU-ESP8266-CP2102-Wireless/dp/B010O1G1ES/ref=sr_1_4?crid=2I72FWKT93W8Q&keywords=esp8266&qid=1696227403&sprefix=esp8266%2Caps%2C271&sr=8-4#customerReviews

2)DHT11 Sensor Module - Link https://www.amazon.in/Robodo-Electronics-DHT11-Temperature-Raspberry/dp/B00BOMEO5U/ref=sr_1_1?crid=1E1ZJLWPOM2OT&keywords=DHT11&qid=1696227574&sprefix=dht1%2Caps%2C201&sr=8-1

3)Soil Moisture Sensor Module- Link https://www.amazon.in/EVANA-Moisture-Hygrometer-Detection-Multicolour/dp/B01AV14S00/ref=sr_1_5?crid=1CGDGISLJSKEN&keywords=soil+moisture+sensor&qid=1696345892&sprefix=soil+moisture+senso%2Caps%2C272&sr=8-5

4)Female to Female Jumper wires - Link https://www.amazon.in/ApTechDeals-Jumper-Female-breadboard-jumper/dp/B074J9CPV3/ref=sr_1_4?crid=R3EUKIUR46Z2&keywords=female+to+female+jumper+wires&qid=1696227915&sprefix=female+to+female%2Caps%2C200&sr=8-4

5)300 RPM 12 DC Motor- Link https://www.amazon.in/Robodo-Electronics-Johnson-Geared-Robotics/dp/B00N4O7GU6/ref=sr_1_2?crid=186FS0ZSRNZXM&keywords=300+rpm+gear+motor+12v+dc&qid=1696227976&sprefix=300+rpm+dc+motor%2Caps%2C209&sr=8-2

6)Compost bin/any other large bucket with a lid

7)Fan piece from old exhaust fan

8)3D printed parts- Bearing mount, Pulley system pieces

9)Wood lid, Rods, Bearing  

10)PVC pipes 

11)Pulley Band

12)5V Relay - Link https://www.amazon.in/Channel-Module-Switch-Isolation-Trigger/dp/B08242LQ68/ref=sr_1_2?crid=35NN9SG128DJ0&keywords=5v+relay&qid=1696231316&sprefix=5v+relay%2Caps%2C195&sr=8-2

13)Ball bearing 

14)12V power adapter

15)PVC pipes cap

Logic of the complete program
-The device has one mode; i)Updating information to the user
  The Operation
  -The lid is placed on top of the bucket.
  -The soil moisture sensor immediately sends a message to the user and tells them how much water/dry material the user needs to put    in
  -The air temperature sensor measures the temperature and accordingly tells the user to place the assembly into a cooler or hotter    environment.
  -All of this data is displayed and printed on the blynk app.
  -After the user has made the necessary changes to the components inside, the user can enable to motor once, using a button in the    app itself.

Assembly and debugging

For the assembly use a bucket and a cap or slit the diameter of that bucket to put in the components such as the motor, DHT11 sensor and the soil humidity sensor.

Click https://drive.google.com/file/d/1snu3IY4oP5G4K0erBR5lxHsDfZ9WPsQx/view?usp=sharing for pictures

We didn’t find a lot of bugs while programming as the code is very straightforward and simple however it would be good to check that all your components are working accurately before running the master code.

Final project demonstration video-  

Click https://drive.google.com/file/d/14JdgYnkZ9MLAtqW5SuIytds9uqhCBcYh/view?usp=drive_link

