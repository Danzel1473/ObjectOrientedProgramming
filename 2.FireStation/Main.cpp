#include <iostream>
#include "TraineeFirefighter.h"
#include "Firefighter.h"
#include "FireChief.h"
#include "FireStation.h"
#include "Administrator.h"

int main()
{
	FireStation* fireStation = new FireStation();

	// 관리자
	Administrator* admin = new Administrator("관리자", "태준", "장");
	FireTruck* truckOne = new FireTruck();

	Firefighter* ronnie = new Firefighter("로니");
	Firefighter* jin = new Firefighter("진");
	TraineeFirefighter* jim = new TraineeFirefighter("짐");

	FireChief* harry = new FireChief("해리", jin);

	// 출근
	fireStation->ClockIn(admin);
	fireStation->ClockIn(ronnie);
	fireStation->ClockIn(jin);
	fireStation->ClockIn(jim);
	fireStation->ClockIn(harry);

	// 이름 확인
	fireStation->RollCall();


	truckOne->SetDriver(harry);
	harry->Drive(truckOne, Point(200, 300));

	FirefighterBase* stillHarry = harry;
	stillHarry->ExtinguishFire();

	harry->ExtinguishFire();
	
	truckOne->SetDriver(ronnie);
	
	ronnie->Drive(truckOne, Point(10, 5));

	truckOne->SetDriver(jin);
	jin->Drive(truckOne, Point(20, -3));

	delete truckOne;
	delete ronnie;
	delete jin;
	delete harry;
	delete jim;
	delete fireStation;
	delete admin;
}