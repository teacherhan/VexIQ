#pragma config(StandardModel, "Clawbot IQ With Sensors")
void goBack(float dist){
	setMotor(leftMotor,50);
	setMotor(rightMotor,50);
	waitUntil(getdistanceValue(distanceMM)>dist);
	stopMultipleMotors(leftMotor, rightMotor);
}

task main()
{
	forward(2,rotations,50);
}
