# Robotic-Arm/Gripper

Design and development of an Arduino controlled robotic arm/gripper

### Introduction & Goals

Inspired by Iron Man, this project explores the design of a robotic arm and how it can act as an extra pair of hands for simple tasks. The project combines mechanical design, CAD, prototyping and electronic control, with the long-term goal of exploring AI-assisted control.

The Problem this project it trying to address is fatigue. This robotic arm is to provide assistance to the user hence they can receive an extra pair of hands when needed. 

This project is currently in the last stage of its development as the assembly just needs to be upgraded with servo control as I am currently waiting for ordered parts. 

Tools, components and manufacturing methods:
- PTC Creo for CAD development
- 3D printing for manufacture
- Velxio for simulation control
- Arduino, servomotors and potentiometers for motion control
- GitHub for Project documentation 

Final outcome: A working robotic gripper assembly with servo motor control. Designed in Creo, tolerance tested through 3D printing iterations, and documented on GitHub

Goal 1: Robotic Arm must achieve mechanical motion 
 Result: The servomotors rotated the elbow joints by at least 60 degrees

Goal 2: Fabricte a physical prototype 
  Result: CAD components were 3D printed 

Goal 3: Implement basic control circuitry  
  Result: wired a potentiometer to a servomotor and controlled it with an Arduino  

## Initial Architecture design and features
![Initial sketch before CAD](Images/Initial%20sketch%20before%20CAD.jpg)
Early concept sketch showing arm structure joint movement and gripper mechanism.

# Contents

- [Project Overview & Requirements](#Project-Overview--Requirements)
- [Constraints](#Constraints)
- [Used Tools & Components](#Used-Tools--Components)
  - [CAD & Mechanical Design](#CAD--Mechanical-Design)
  - [Actuation, Electronics & Control](#Actuation-Electronics--Control)
  - [Manufacturing & Prototyping](#Manufacturing--Prototyping)
  - [Version Control & Documentation](#Version-Control--Documentation)
      - [Repository Structure](#Repository-Structure)
- [Design Development & Iteration](#Design-Development--Iteration)
  - [Tolerances, Fits & Interfaces](#tolerances-fits--interfaces)
- [Testing & Validation](#Testing--Validation)
- [Demo](#Demo)
- [What Breaks / Current Limitations](#What-Breaks--Current-Limitations)
- [Future Development](#Future-Development)
- [Conclusion](#Conclusion)

## Project Overview & Requirements

The Robotic arm/gripper is intended to be able to pick up and move small lightweight objects using servocontrolled motion. The project has been designed to have 4 joint and 5 degrees of freedom. The current version is only has 4 degrees of freedom and 3 joints with the ability to move with servomotor control. The project current stage is fully developed. The Robotic arms requirements are:

- to move at least 60 degrees of motion at each joint
- to be a physical model
- to cost no more than £50
- to use circuitry
- to be able to pick up and grip objects
- to have at least 2 degrees of freedom
- to have appropriate measurements
- to have appropriate coding

I have met the first requirement due to my [final demo](#Demo) which demonstrates that the robotic arm prototype can move 64 degrees. I have also met the second, third and forth requirements as I have 3D printed my robotic arm and have used circuitry such as microcontrollers, servomotors and potentiometers to bring my design to life, whilst keeping under my budget. Requirements 6 and 7 have also been met as the final products shows at least 2 degrees of freedom and appropriate measurements due a clearance of ±0.4mm being used.

Requirements I haven't met are 5 and 8 as I didn't have the money to 3D print the robotic gripper head meaning that only a simulation could be shown to display its objected lifting capabilities meaning that this requirement can't be completely validated. Therefore if I had to redo the project I would make a physical gripper head to validate this. Another requirement I didn't meet was appropriate coding as I used AI to create this C++ code, I haven't learned how to use C yet although I do know how to use Python and MATLABS. Hence, if I had to redo the project I would learn to use C++ before hand so I could validate this programming as my own.

## Constraints

Budget: £50 was the maximum amount of money I was willing to spend on this project. This stopped me from being able to 3D print the gripper head of the robotic arm, as I would have gone over budget. Hence I could only 3D print the body for the prototype. Therefore, I decided to simulate how the gripper works as a substitute. 

Time: The projects deadline was mid September 2026 with a project window frame of about 6 weeks

Hardware: For this project, I worked primarily with a standard Laptop and iPad. This limited me in simulating how my Robotic arm would react to stress and thermal analysis as simulation required an NVIDIA GPU. furthermore, this project caused me to borrow Arduino, servomotors, potentiometers and more from my university. 

Manufacturing: Manufacturing for the robotic arm was completed at my university as I didn't own a 3D printer. Black PLA filament was used for modelling. CAD parts were turned into STL files and exported to the device using a flash drive which I had to purchase, reducing my budget.

Geometry / packaging: The robotic arm was limited due to the size of the wings on each servomotor. Hence I had to order servo linkages off Amazon to attach each members to each servomotor causing a reduction in my budget that could have been spent else where.

Safety / reliability: Safety and reliability limits involved the circuitry not being built into the robotic arms design. Hence loose wiring occurring was greater meaning that the devices function could fail. 

## Used Tools & Components

- PTC Creo was used for CAD as I already knew how to use this software. Creo covers modelling, assemblies and drawings in one place making it a good choice for the robotic arms design. An alternative I thought about using was SolidWorks as I have experience with this software but haven’t used it in 2 years hence, I chose Creo.
 
- 3D printing was used to physically manifest parts. This went hand in hand with my CAD modelling as I could copy the designs into STL files used for quick and easy printing. Making it the strongest option. An alternative I thought about was cutting foam using a hot wire cutter, but this wouldn’t have been passive work and would have taken up a lot of time meaning I could have fallen behind schedule.
  
- Arduino was used for driving the servomotors when an input was given to the potentiometers. This allowed me to control the rotation of the robotic arm’s members. Components were connected via wiring through a breadboard. An alternative I thought about using was a Raspberry Pi, but this was far too complex than what I needed.
  
- Servomotors were used for controlling the members of the robotic arm. These were connected to each member via metal rods. An alternative I thought about using was a DC motor, but its torque was too low.
  
- GitHub was used to document my project as it provided branching which allowed me to update my progress without affecting the main database until I was ready.
  
- Velxio was a simulator I used for designing my circuitry before I assembled it physically. This helped me to design it physically

## CAD & Mechanical Design

CAD software used: PTC Creo, was used as it was the software I have the most expirience with. 

Overall assembly: The Over all assembly features around 20+ parts with some parts being used more than once. Two assemblies were created the gripper head and the Robotic arm. The mechanism had 5 degrees of freedom. 
![CAD Assembly](Images/CAD%20finished%20assembly.jpg)

Key mechanisms: Gripper assembly, small arm, medium arm, large arm, base joint, base plate

Motion / mechanism analysis: Checked rotary motion at each joint, at extreme angles there were limits but this was a desired outcome to avoid clashing.

Engineering drawings: All the [3D printing parts](3D%20printing%20parts/) needed drawing due to tolerancing required for smooth connections when 3D printing.

Design trade-offs: To ensure that the members were as light as possible, for smoother servomotor control, this involved removing as much material as possible making the parts weaker. However, this made the cost to print cheaper saving money. 

Alternative designs considered: Only using a 2 member design was something I had considered as it made the design more simplistic and cheap. However this reduced the robotic arms reach making it less practical. Therefore, I gave the design 3 members. For the gripper head I thought about using gears but this seemed too complicated for the design so I stuck with servo driven motion. 

## Actuation, Electronics & Control

Microcontroller: ELEGO UNOR3 - its role was to turn code into a set of instructions between the potentiometer and the servomotor causing motion. This was suitable as it provided enough voltage and amplitude for the job.

Actuators: Used standard hobby servomotor model S3003 for simple motion control

User input: Turning Potentiometer 

Power: The circuitry was powered via my laptop and a booster I bought to prevent the microcontroller's fuse from blowing

Wiring: Standard ELEGO male-male wiring was used to connect each component to the breadboard

Control logic: Input (potentiometer is turned), microcontroller (ELEGO processes input to produce the required output using code), Output (servomotor rotates)
[Watch physical Arduino-servo simulation](Physical%20and%20software%20simulations/Physical%20Arduino-servo%20motion.mp4)

safety limits: servomotors were placed inside members to prevent damage and servo-rotation was limited to prevent collisions.

[AI Arduino source code](Physical%20and%20software%20simulations/sketch.ino)  
![Velxio simulation](Images/Velxio%20simulation%20.jpg)

## Manufacturing & Prototyping

As there were so many parts to print, this would have cost a lot of money, hence I could only print the main parts of the robotic arm. This excluded bearings and rods as well as the gripper head.  The gripper head was very intricate and would have taken a lot of time and resources to print, so I simulated it instead. Manufacturing limitations led to me altering the original parts making them easier to 3D print. As hovering displayed in the initial designs would have caused the software to produce lots of supports causing rough surfaces and greater friction reducing smooth servo control. 

Parts were assembled and disassembled due to panels pinned at each joint which ensured the members stayed connected. Each connection point had a tolerance of ± 0.4mm so everything attached smoothly. On my first print of the Robotic arm failed to integrate this, hence reprints were done. The cost for this was around about £20 worth of materials for both sets of prints. 

### Initial 3D print failure
![Initial 3D print](Images/Initial%203D%20print.jpeg)

## Version Control & Documentation

Explain how GitHub is used to organise the project. GitHub has been the central place for where I have organised all my work. I have structured files for CAD, 3D printing, Images, modifications and simulations. I have used the README to explain, what I did in the project as well as how and why for a plethora of decisions.

### Repository Structure
- STL files modified for 3D printing can be found [here](3D%20printing%20parts/)
- CAD parts and assemblies can be found in the working directory [here](Creo%20project/)
- Images documenting the project can be found [here](Images/)
- Modified Parts for clearance, cost and weigh can be found [here](Modified%20parts%20for%20tolerances/)
- Simulations for CAD, Arduino and the final product can be found [here](Physical%20and%20software%20simulations/)
- README for the project story: goals, decisions, evidence, results, limitations and next steps can be found [here](README.md)

By using branches I updated a copy of the main repository. This allowed me to edit my README and filing by adding or deleting things. If I liked the work I completed with this branch, I could then merge it with the original to make it the main branch. If I didn't I could then discard the branch whilst keeping the initial main the same.

Each edit caused by pushing new material to the origin was apart of my iterative design and if you go to my profile you can see all of the tweaks I made to this project throughout its life.

## Tolerances, Fits & Interfaces

Initially all the connected parts for the Robotic arm had no clearance. Using a clearance was something I probably should have thought about in the initial 3D print. This meant that the first print was too tight causing a lot of friction stopping smooth servomotor control. This led to me to modify CAD parts for manufacturing purposes. This involved removing material for light weight and cost and using a clearance of ±0.4mm. This made it easier for the servomotors to move and lift the adjacent material. This helped me to learn that every time you design something, a tolerance should always be used in manufacture, otherwise components may not fit together as designed.

## Testing & Validation

Testing was completed non-destructively. Non-destructively the objective was to see if the project could rotate at least 60 degrees, this was mentioned at the start in my goals. To measure this I used a protractor the arm manage to move around 64 degrees and couldn't move any further. A limitation was the servomotors as they could only rotate 180 degrees. If I had to do the test again i would have used a different type of servomotor that could move 360 degrees. Hence each member would have been able to rotate further.

Furthermore, I used non-destructive testing to assess the gripper head this was using CAD software as I couldn't 3D print the gripper. The objective was to use a servomotor to get the jaws of the gripper head to open and close. 
https://github.com/user-attachments/assets/3b3507d3-5217-4580-a304-04e4b8625a54

The result was that the gripper could open and close prefectly. A limitation of this is that I couldn't produce it physically hence I don't know truly if it would work. Therefore, if I had to do redo the project I would get more funding to print out the gripper. 

## Demo

This is a demo of the final product it shows me moving two of the robotic arms members using potentiometers and servomotors connected via a breadboard and microcontroller. This was were my robotic arm cam to life!

### Robotic Arm Project Final Demonstration
https://github.com/user-attachments/assets/79b7d7dd-8787-4b34-adfd-126fe1583319

## What Breaks / Current Limitations

-	One limit I reached was using more than 2 servomotors for the main prototype I would have liked to use 4. However, this would have involved massive changes CAD design and manufacture to allow for the servomotors to be integrated into the base plate and base joints. Hence if I had to produce a 3rd model, I would do that.
  
-	Another limit was the gripper head being printed. This would have taken a lot of time and money to produce due to there being so many parts. Hence if I had to produce another prototype, I would have increase my budget and extended my deadlines, to account for a clearance alteration, the time taken and cost to print.
  
- Currently nothing destructively breaks but servo motion is limited as there on no slots for the servos to work smoothly with. Theis is due to metal rods connecting the servos to each member become tight. This puts pressure on the servomotors causing them to move themselves as they aren’t fixed. Hence, for my next version I will fix the servos and add a slot in each member for the rods to move in.

## Future Development

Mechanical improvement: To 3D print the gripper head and attach it to the gripper arm so it looks more like the CAD model

Electronics improvement: To add additional servomotors and using slotting for better servo motion 

Additional testing: To simulate the gripper head physically and not just on CAD.

Long-term development: To use AI-assisted control - use and AI to decide whether the robotic arm should pick something up or not.

## Conclusion

Overall, this project has provided an opportunity to apply the engineering design process from an initial design to a functional prototype. Looking back at my 3 goals I managed to achieve all of them as I created a robotic gripper which could rotate at least 60 degrees, fabricated a physical prototype and used basic circuitry in the final design.

Major engineering decisions that made the biggest difference was using a clearance and removing material for a lighter and cheaper product. This iteration allowed me to save money and produce smooth servomotor control and taught me to apply these things straight away for future projects.

Something that the Prototyping taught me that CAD alone did not was that using a clearance in a physical prototype is imperative whereas in a CAD assembly it is not. Hence, always account for real world problems as a stimulatory drawing cannot account for every issue.

The biggest challenge I faced was using circuitry as I have never been taught mechatronics. Therefore, this was a challenge that taught me a lot about microcontrollers and circuits. Hence, I now feel more confident in using them now and in the future. 

If I had to start the project again and change something I would give myself a larger time frame and a bigger budget to complete the robotic arm/gripper. As then I might have been able to make the gripper giving the project greater validation. 
