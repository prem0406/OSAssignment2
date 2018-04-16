#include<stdlib.h>
#include<stdio.h>
int main()
{
	long t_pservice,t_preplace,t_maccess,t_eaccess;
	float p_pservice,p_preplace;
	double p;//Page fault rate
	t_pservice=8000000;//page service time
	t_preplace=20000000;//page replace time
	p_preplace=0.7;// probability of page replacement
	p_pservice=1-p_preplace;//probability of page service
	t_maccess=100;//memory access time
	t_eaccess=200;//effective access time

		/*
		Actual Formula:
		t_eaccess=(1-p)*t_maccess+p_prepalace*p*t_preplace+p_pservice*p*t_pservice;
		*/
	p=(t_eaccess-t_maccess)/(t_pservice*p_pservice+t_preplace*p_preplace-t_maccess);
	printf("Page Fault Rate: %lf \n",p*100);

	

}
