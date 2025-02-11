#include <iostream>
#include "FireChief.h"

int main()
{
	FireTruck* truckOne = new FireTruck();

	Firefighter* ronnie = new Firefighter("�δ�");
	Firefighter* jin = new Firefighter("��");

	FireChief* harry = new FireChief("�ظ�", jin);

	truckOne->SetDriver(harry);
	harry->Drive(truckOne, Point(200, 300));

	Firefighter* stillHarry = harry;
	stillHarry->ExtinguishFire();

	harry->ExtinguishFire();
	
	truckOne->SetDriver(ronnie);
	
	ronnie->Drive(truckOne, Point(10, 5));

	truckOne->SetDriver(jin);
	jin->Drive(truckOne, Point(20, -3));

}