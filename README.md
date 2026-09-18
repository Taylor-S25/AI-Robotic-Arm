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

*Abstract* Once the project is finished, come back and add a short summary of the final outcome here as well.

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
- [Design Development & Iteration](#Design-Development--Iteration)
  - [Tolerances, Fits & Interfaces](#tolerances-fits--interfaces)
- [Testing & Validation](#Testing--Validation)
- [Demo](#Demo)
- [What Breaks / Current Limitations](#What-Breaks--Current-Limitations)
- [Future Development](#Future-Development)
- [Repository Structure](#Repositary-Structure)
- [Conclusion](#Conclusion)

## Project Overview & Requirements

Explain what the robotic arm/gripper is intended to do. 

Explain the overall mechanical layout and the number of joints or degrees of freedom.

State what movements or tasks the current version is designed to perform.

State the current project status: CAD-only, partially manufactured, assembled, electronically controlled, tested, or still in development.

List the main functional requirements. Examples could include joint range of motion, gripping ability, overall size, ease of assembly, controllability or cost.

For each important requirement, say how you will prove that it has been met.

Key Engineering Numbers

Show the numbers that explain your design choices. Do not add calculations just for the sake of having calculations; use them where they answer an engineering question.

Overall dimensions and approximate mass of the arm/gripper.

Joint ranges of motion in degrees.

Target or tested load at the gripper, if applicable.

Actuator torque requirement or available servo torque, where relevant.

Lever arm distances used when estimating joint torque.

Clearances used between mating or rotating parts.

Estimated or measured current demand for the servos and controller.

Manufacturing cost, print mass or material usage if these affected the design.

For example, if actuator torque affected a design decision, show the load, distance from the joint and the resulting torque estimate. If power affected the electronics, show the expected current demand. A number gives the tool or component choice something to point at.

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

- STL files modified for 3D printing can be found [here](3D%20printing%20parts/)
- CAD parts and assemblies can be found in the working directory [here](Creo%20project/)
- Images documenting the project can be found [here](Images/)
- Modified Parts for clearance, cost and weigh can be found [here](Modified%20parts%20for%20tolerances/)
- Simulations for CAD, Arduino and the final product can be found [here](Physical%20and%20software%20simulations/)

By using branches I updated a copy of the main repository. This allowed me to edit my README and filing by adding or deleting things. If I liked the work I completed with this branch, I could then merge it with the original to make it the main branch. If I didn't I could then discard the branch whilst keeping the initial main the same.

Each edit caused by pushing new material to the origin was apart of my iterative design and if you go to my profile you can see all of the tweaks I made to this project throughout its life.

## Tolerances, Fits & Interfaces

Initially all the connected parts for the Robotic arm had no clearance. Using a clearance was something I probably should have thought about in the initial 3D print. This meant that the first print was too tight causing a lot of friction stopping smooth servomotor control. This led to me to modify CAD parts for manufacturing purposes. This involved removing material for light weight and cost and using a clearance of ±0.4mm. This made it easier for the servomotors to move and lift the adjacent material. This helped me to learn that every time you design something, a tolerance should always be used in manufacture, otherwise components may not fit together as designed.

## Testing & Validation

Testing was completed non-destructively. Non-destructively the objective was to see if the project could rotate at least 60 degrees, this was mentioned at the start in my goals. To measure this I used a protractor the arm manage to move around 64 degrees and couldn't move any further. A limitation was the servomotors as they could only rotate 180 degrees. If I had to do the test again i would have used a different type of servomotor that could move 360 degrees. Hence each member would have been able to rotate further.

Furthermore, I used non-destructive testing to assess the gripper head this was using CAD software as I couldn't 3D print the gripper. The objective was to use a servomotor to get the jaws of the gripper head to [open and close](Physical%20and%20software%20simulations/CAD%20gripper%20servo%20motor%20simulation.mp4).The result was that the gripper could [open and close](Physical%20and%20software%20simulations/CAD%20Gripper%20simulation.mp4) prefectly. A limitation of this is that I couldn't produce it physically hence I don't know truly if it would work. Therefore, if I had to do redo the project I would get more funding to print out the gripper. 

## Demo

This is a demo of the final product it shows me moving two of the robotic arms members using potentiometers and servomotors connected via a breadboard and microcontroller. This was were my robotic arm cam to life!

[Robotic Arm Project Final Demonstation](Physical%20and%20software%20simulations/Robotic%20Arm%20Project%20Final%20Demonstation.mp4)

## What Breaks / Current Limitations

Three or four honest points. What did you choose not to solve, what reaches its limit first, and what would you change if you built the next version?

[Mechanical limit] [At what load, angle, geometry or condition it becomes a problem, and what you would do about it]

[Tolerance / backlash / flex issue] [When it matters and the next design change]

[Power / actuator limitation] [What happens and why you accepted it for this prototype]

[What you deliberately did not manufacture or validate] [Why it was not worth doing at this stage]

[Risk you accepted] [What happens if it occurs, and why you decided to live with it]

You do not have to fix every limitation before publishing the project. Knowing where the current design stops being reliable is stronger than pretending there is no ceiling.

## Future Development

Near-term mechanical improvement: [the next change that directly addresses a current limitation]

Near-term control / electronics improvement: [additional actuator, sensor, power system, control method, etc.]

Additional testing: [what still needs to be measured or validated]

Longer-term development: [AI-assisted control, computer vision, autonomous object detection or other features if you genuinely intend to explore them]

Keep the future section tied to the current project. The next step should solve something that the present prototype cannot yet do, rather than becoming a wish list of unrelated technology.

## Repository Structure

/CAD - Creo parts, assemblies, drawings and exported files

/Code - Arduino / control code and any supporting scripts

/Images - CAD renders, build photos and test evidence

/Videos - motion and control demonstrations

/Docs - optional BOM, drawings, test notes or portfolio material

README.md - the clear project story: goals, decisions, evidence, results, limitations and next steps

Only create folders you actually need. The point is to make the project easy to navigate, not to make the repository look artificially complicated.

## Conclusion

Write a comprehensive conclusion.

How did the project turn out compared with the goals at the top?

What major engineering decisions made the biggest difference?

What did the physical prototype or testing teach you that CAD alone did not?

What were the biggest challenges?

What would you change if you started the project again?

Then go back to the introduction and add the short version of this outcome to the opening summary.

Make the lessons specific. "I would improve the tolerances" says very little. "The first printed joint bound because the mating dimensions did not include enough manufacturing clearance, so I increased the clearance by X mm on the next revision" shows that you reviewed your own work and changed the design because of evidence.

Before Publishing - Delete This Section From the Final README

Can someone understand what the project does without opening the CAD files?

Does every major design claim have evidence: a number, test, drawing, image or linked file?

Have you explained why important components and tools were chosen?

Have you shown at least one alternative that you considered and rejected?

Do the constraints explain decisions caused by budget, time, hardware or manufacture?

Have you shown at least one meaningful design iteration?

Do the tests map back to the original goals or requirements?

Are large code blocks and file dumps replaced with links and short explanations?

Does the limitations section state real current boundaries?

Are future improvements connected to those limitations?

Are units, dimensions, names and terminology consistent throughout?
