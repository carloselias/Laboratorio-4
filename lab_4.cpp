#include <iostream>
#include <math.h>
int opm(int n1,int n2,int n3);
int rr(int sm,int rt,int mpc,int dv,int rd);
int main()
{
	char rp='s';
	while(rp=='s'||rp=='S')
	{
		int cdo,n1,n2,n3;
		std::cout<<"Ingrese cuantas operaciones desea realizar > ";
		std::cin>>cdo;
		for(int i=0;i<=cdo-1;i++)
    	{
    		std::cout<<"Que operacion desea realizar?"<<std::endl<<"1) suma"<<std::endl<<"2) resta"<<std::endl<<"3) multiplicacion"<<std::endl<<"4) division"<<std::endl<<"5) residuo de la division"<<std::endl<<"> ";
    		std::cin>>n1;
			std::cout<<"ingresar datos, primer numero > ";
			std::cin>>n2;
			std::cout<<"segundo numero > ";
			std::cin>>n3;
			opm(n1,n2,n3);
			system("pause");
			system("cls");
    	}
		std::cout<<"Ahora, desea repetir programa? (s/n) > ";
		std::cin>>rp;
		system("cls");
	}
}
int opm(int n1,int n2,int n3)
{
	int sm=0,rt=0,mpc=0,dv=0,rd=0;
	switch(n1)
	{
		case 1:
		{
			sm=n2+n3;
			rr(sm,rt,mpc,dv,rd);
		}
		break;
		case 2:
		{
			rt=n2-n3;
			rr(sm,rt,mpc,dv,rd);
		}
		break;
		case 3:
		{
			mpc=n2*n3;
			rr(sm,rt,mpc,dv,rd);
		}
		break;
		case 4:
		{
			dv=n2/n3;
			rr(sm,rt,mpc,dv,rd);
		}
		break;
		case 5:
		{
			rd=n2&n3;
			rr(sm,rt,mpc,dv,rd);
		}
		break;
	}
}
int rr(int sm,int rt,int mpc,int dv,int rd)
{
	std::cout<<"suma > "<<sm<<std::endl<<"resta > "<<rt<<std::endl<<"multiplicacion > "<<mpc<<std::endl<<"division > "<<dv<<std::endl<<"residuo de la division > "<<rd<<std::endl;
}