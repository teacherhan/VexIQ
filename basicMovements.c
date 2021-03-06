#pragma config(StandardModel, "Clawbot IQ With Sensors")
void goBack(float dist){
	setMotor(leftMotor,50);
	setMotor(rightMotor,50);
	waitUntil(getdistanceValue(distanceMM)>dist);
	stopMultipleMotors(leftMotor, rightMotor);
}

task main()
{
	var distance = 10.00;
	forward(2,rotations,50);
	goBack(distance);
	
	setMultipleMotors(leftMotor,rightMotor,50);
	waitUntil(getDistanceValue(distanceMM)>500);
	stopMultipleMotors(leftMotor, rightmotor);
        if(getDistanceValue(distanceMM)<distance){
           forward(1,rotation, 50);
        }
}
