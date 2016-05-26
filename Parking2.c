
task main()
{
SensorType[S2] =sensorSONAR;
	SensorType[S3]=sensorEV3_Touch;
	if(SensorValue[S2]>30)
{
		moveMotorTarget(motorA,80,10);
		repeatUntil(getMotorEncoder(motorA)>=getMotorTarget(motorA))
		{
		}
		moveMotorTarget(motorB,500,10);
		repeatUntil(getMotorEncoder(motorB)>=getMotorTarget(motorB))
		{
			displayCenteredTextLine(4,"ncoder end=: %d", getMotorEncoder(motorB));
		}
}
do
					{
					 if(getMotorEncoder(motorB)> 2000 &&  getMotorEncoder(motorB) < 1500)
					   sleep(1000);
					   moveMotorTarget(motorC,75,10);
				{
					    if(getMotorEncoder(motorB)> 2000 && getMotorEncoder(motorB) < 1600 && SensorValue[S2]>15)

			      	moveMotorTarget(motorB,600,-10);
			      	sleep(5000);
			      	moveMotorTarget(motorC,75,-10);
			      	moveMotorTarget(motorB,600,-10);
			      	sleep(5000);
			      	moveMotorTarget(motorC,75,-10);
			      	sleep(2000);
			      	moveMotorTarget(motorC,85,30);
			      	sleep(5000);
			      	moveMotorTarget(motorC,75,-10);
							repeatUntil(getMotorEncoder(motorB) >= getMotorTarget(motorB))
							{


											moveMotorTarget(motorC,80,-10);
										repeatUntil(getMotorEncoder(motorC) >= getMotorTarget(motorC))
										{
											wait1Msec(2000);
											moveMotorTarget(motorB,600,-10);
							repeatUntil(getMotorEncoder(motorB) >= getMotorTarget(motorB))
							{
						wait1Msec(2000);
								moveMotorTarget(motorC,60,10);
										repeatUntil(getMotorEncoder(motorC) >= getMotorTarget(motorC))
										{

										}
							}
						}
	}
							}




				}while(true);



 }
