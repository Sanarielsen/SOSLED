# SOSLED
An project can have my first code to arduino board, that show SOS code with a original LED of board

That project is construct because I follow steps on "Arduino for dummies" and
know more about that technology for project's personals and project named as
"Korv" for my university graduate.

## First instructions

First of all, I need to say two methods is used to mainly obligational for that
code works, these methods are:

- setup(): In that method, run first of steps to can be works that routine programmate
- loop(): In that method, run that code in loop when at energy is work on Arduino or
similar technology is used. And when button "reset" is activated in a board.

## Permissions

Probally you have a problems with permissions, and that code can be resolve that:

> sudo chmod a+rw /dev/ttyACM0

That code is executed because the routine to send and execute that code in Arduino,
needs to approval inside of OS (Operator System). Can be necessary repeat that code
one than more time.

> sudo chmod a+rw ['nameOfGadgetArduino']

Link: https://forum.arduino.cc/t/permission-denied-on-dev-ttyacm0/475568/4

