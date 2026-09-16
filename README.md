# Robotic-Arm/Gripper

Design and development of an Arduino controlled robotic arm/gripper

### Introduction & Goals

Inspired by Iron Man, this project explores the design of a robotic arm and how it can act as an extra pair of hands for simple tasks. The project combines mechanical design, CAD, prototyping and electronic control, with the long-term goal of exploring AI-assisted control.

What problem or idea is the project trying to address?

What stage is the project currently at?

What tools, components and manufacturing methods are you using?

What are you doing with those tools, rather than simply listing them?

Once the project is finished, come back and add a short summary of the final outcome here as well.

Then list your goals. Two or three is plenty. Each goal gets a line saying how you know it worked. Where possible, make that line measurable. "The arm should move smoothly" is difficult to prove. "The elbow joint should rotate through at least 120 degrees without binding" can be checked.

Goal 1: [what the project has to achieve, in plain language]  How I know it worked: [the measurable version]

Goal 2: [...]  How I know it worked: [...]

Goal 3: [optional]  How I know it worked: [...]

Why this matters: starting with the engineering objective makes the rest of the portfolio read as a design process rather than a list of software, parts and tools.

Architecture

Draw this yourself and add it to the GitHub repository when you are ready. Keep it simple. Show how the main parts of the system connect, for example: user input -> Arduino/controller -> servo motors -> joints/linkages -> arm/gripper movement, with the power supply shown separately. If someone only looks at one diagram in the repository, it should explain the complete system.

# Contents

- [Project Overview & Requirements](#Project-Overview-&-Requirements)
- [Constraints](#Constraints)
- [Used Tools & Components](#Used-Tools-&-Components)
  - [CAD & Mechanical Design](#CAD-&-Mechancial-Design)
  - [Actuation, Electronics & Control](#Actuation-,Electronics-&-Control)
  - [Manufacturing & Prototyping](#Manufacturing-&-Prototyping)
  - [Version Control & Documentation](#Version-Control-&-Docummentation)
- [Design Development & Iteration](#Design-Development-&-Iteration)
  - [Tolerances, Fits & Interfaces](#Tolerancing,-Fits-&-Interfaces)
- [Testing & Validation](#Testing-&-Validation)
- [Demo](#Demo)
- [What Breaks / Current Limitations](#What-Breaks-/-Current-Limitations)
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

What you had to work with. Be straight about it; this is not an apology. Constraints are often the reason the final design looks the way it does.

Budget: [what you were willing or able to spend, and what this stopped you manufacturing or buying]

Time: [the project window and any deadlines]

Hardware: [available laptop, Arduino, servo motors, power supply, tools, etc.]

Manufacturing: [printer access, build volume, material, minimum feature size, support requirements, outsourced printing, etc.]

Geometry / packaging: [overall size, joint clearances, actuator mounting space, cable routing]

Safety / reliability: [pinch points, current limits, load limits, acceptable test conditions]

"I could not manufacture every part within the available budget, so CAD motion studies and simulations were used to develop the unmanufactured sections" is useful engineering context. It explains a decision instead of hiding it.

## Used Tools & Components

Explain which tools, components and processes you used and why.

Explain how they work at the level needed to understand your project; do not turn the README into a textbook.

Explain how you set them up or used them in this project.

For important choices, state what alternative you considered and why you rejected it.

A choice with an alternative beside it is much stronger than a choice on its own. "I used a servo motor" says what you bought. "I chose a servo because position control was simple and compact for this prototype; a DC motor would have required additional sensing and control" explains an engineering decision.

## CAD & Mechanical Design

PTC Creo / CAD software used: [what you used and why]

Overall assembly: [number of parts, subassemblies, joints and degrees of freedom]

Key mechanisms: [hinges, linkages, gripper, brackets, rotating joints, etc.]

Motion / mechanism analysis: [what movement you checked and what it told you]

Engineering drawings: [which parts or interfaces needed drawings and why]

Design trade-offs: [strength vs weight, stiffness vs material, complexity vs manufacturability, range of motion vs packaging]

Alternative designs considered: [what you rejected and why]

Actuation, Electronics & Control

Microcontroller: [model, role and why it was suitable]

Actuators: [servo / motor type, number used, torque or range where relevant]

User input: [potentiometer, buttons, software input, etc.]

Power: [how the controller and servos are powered and why]

Wiring: [signal, power and common-ground arrangement]

Control logic: [input is read -> converted to target position -> actuator command is sent -> physical response is checked]

Limits / protection: [software angle limits, safe start position, external power, current considerations, etc.]

Link to the source code rather than pasting the entire program into the README. A short snippet is fine only if it shows something worth explaining.

## Manufacturing & Prototyping

Explain which parts were physically manufactured and which remained CAD-only.

State the manufacturing process and material for the parts that were made.

Explain how manufacturing limitations changed the geometry.

Discuss wall thickness, weak features, supports, print orientation or other manufacturing concerns where relevant.

Explain how parts are assembled and disassembled: pins, bolts, shafts, press fits, clearances, etc.

State any reprints or remanufactured parts and exactly what changed between versions.

Include the approximate bill of materials and total project cost if cost influenced decisions.

## Version Control & Documentation

Explain how GitHub is used to organise the project.

Keep CAD exports, code, images, videos and documentation in clearly named folders.

Use the README to explain the project; do not use it as a dump for every file or every line of code.

Where useful, link directly to the relevant CAD export, drawing, code file, test video or image.

If the project has clear revisions, label them so an employer can see how the design changed over time.

Design Development & Iteration

Explain how the project developed from the first concept to the current version.

For each important revision, explain the problem, the evidence, the change you made and the outcome.

Show at least one decision that came from a physical build or test rather than from appearance alone.

Where a design did not work as intended, explain why. A failed or imperfect version is useful if it led to a justified engineering change.

Link to the relevant CAD revision, image, measurement or test evidence instead of describing everything from memory.

This is the section that separates a developed engineering project from a single finished CAD model. The reader should be able to see a chain of evidence: observation -> reasoning -> design change -> result.

## Tolerances, Fits & Interfaces

State the nominal dimensions of important mating parts.

State the clearance or interference you intended.

Explain what happened on the first manufactured fit: too tight, too loose, misaligned, acceptable, etc.

State the dimension or clearance change made for the next revision.

State whether the change solved the problem and what you learned from it.

Use actual numbers wherever possible. "The fit was improved" is weak; "the bore was increased from X mm to Y mm after the first print bound on the shaft" is evidence.

## Testing & Validation

Explain what you tested and why the test mattered.

State the method you used.

State the target or expected result before giving the result.

State the measured or observed result.

State the engineering decision that followed: pass, accept limitation, adjust, redesign or test again.

Useful tests for this type of project may include joint range of motion, gripper function, fit and assembly, repeated servo movement, power behaviour, load capacity, deflection or a CAD/simulation check. Only include tests that actually answer a project requirement.

When something goes wrong, say what the system does or what you do next. For example: a joint binds, a servo reaches its torque limit, the power supply cannot support simultaneous movement, or a printed part flexes. Explain how the problem is detected and how the design is changed or limited.

## Demo

Add a short demonstration video here when you are ready.

Or link to a presentation / project video in the repository.

State exactly what the viewer is seeing: which joints move, what input is being used, what object is being gripped, and whether the video shows the final or an intermediate revision.

A short video of the physical system actually moving can do more than several paragraphs. It gives the reader immediate evidence that the mechanism, electronics and control have been brought together.

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
