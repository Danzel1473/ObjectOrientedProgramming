#include <iostream>
#include "TraineeFirefighter.h"
#include "Firefighter.h"
#include "FireChief.h"
#include "FireStation.h"
#include "Administrator.h"

int main()
{
	FireStation* fireStation = new FireStation();

	// ������
	Administrator* admin = new Administrator("������", "����", "��");
	FireTruck* truckOne = new FireTruck();

	Firefighter* ronnie = new Firefighter("�δ�");
	Firefighter* jin = new Firefighter("��");
	TraineeFirefighter* jim = new TraineeFirefighter("��");

	FireChief* harry = new FireChief("�ظ�", jin);

	// ���
	fireStation->ClockIn(admin);
	fireStation->ClockIn(ronnie);
	fireStation->ClockIn(jin);
	fireStation->ClockIn(jim);
	fireStation->ClockIn(harry);

	// �̸� Ȯ��
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