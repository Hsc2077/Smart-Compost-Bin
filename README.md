Smart-Compost-Bin
This project focuses on the use of DHT11 and soil humidity sensor backed by an Arduino board in order to create a smart composting system.

Problem Statement
The improper tracking of moisture levels and temperature during decomposition leading to improper formation of compost.

Idea
A device that measures and tracks various parameters required for proper decomposition.

Prototypes and rejected versions
Click [Here]([url](https://drive.google.com/file/d/1NsjOQaT7277Kws2XYOTswzE_B9CkjLqm/view?usp=sharing)) for pictures.
Video Link- [Here]([url](https://drive.google.com/file/d/196XE0vtusxOqqEp6j_u0zVQryOqMpwhY/view?usp=sharing))

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
Click [Here]([url](https://drive.google.com/file/d/1j5rjSOnQol7ovM6j-cI9oslBV150rppe/view?usp=sharing)) for pictures



List of materials needed
1)Node MCU-ESP8266 Module -  Link Here

2)DHT11 Sensor Module - Link Here

3)Soil Moisture Sensor Module- Link Here

4)Female to Female Jumper wires - Link Here

5)300 RPM 12 DC Motor- Link Here

6)Compost bin/any other large bucket with a lid

7)Fan piece from old exhaust fan

8)3D printed parts- Bearing mount, Pulley system pieces

9)Wood lid, Rods, Bearing  

10)PVC pipes 

11)Pulley Band

12)5V Relay - Link Here

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

Click [Here]([url](https://drive.google.com/file/d/1snu3IY4oP5G4K0erBR5lxHsDfZ9WPsQx/view?usp=sharing)) for pictures

We didn’t find a lot of bugs while programming as the code is very straightforward and simple however it would be good to check that all your components are working accurately before running the master code.

Final project demonstration video-  

Click [Here]([url](https://drive.google.com/file/d/14JdgYnkZ9MLAtqW5SuIytds9uqhCBcYh/view?usp=drive_link)https://drive.google.com/file/d/14JdgYnkZ9MLAtqW5SuIytds9uqhCBcYh/view?usp=drive_link)

