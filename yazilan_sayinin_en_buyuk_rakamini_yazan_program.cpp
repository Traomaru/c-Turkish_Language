#include"iostream"

using namespace std;
main()
{
	setlocale(LC_ALL,"Turkish");

	int sayi,milyar,yuzmilyon,onmilyon,milyon,yuzbinler,onbinler,binler,yuzler,onlar,birler;
	int a,b,c,d,e,f,g;
	cout<<"\n\n  -----====YAZILAN TAMSAYININ EN BÜYÜK RAKAMINI YAZDIRAN PROGRAM====-----";
	cout<<"\n\nTAMSAYIYI YAZINIZ :";
	cin>> sayi;
	
	cout<<"\n\n============================================================\n\n";

	
	///////////////////////////////////////////////////////////////////////
	milyar=sayi/1000000000;
	sayi=sayi-(milyar*1000000000);
	yuzmilyon=sayi/100000000;
	sayi=sayi-(yuzmilyon*100000000);
	onmilyon=sayi/10000000;
	sayi=sayi-(onmilyon*10000000);
	milyon=sayi/1000000;
	sayi=sayi-(milyon*1000000);
	yuzbinler=sayi/100000;
	sayi=sayi-(yuzbinler*100000);
	onbinler=sayi/10000;
	sayi=sayi-(onbinler*10000);
	binler=sayi/1000;
	sayi=sayi-(binler*1000);
	yuzler=sayi/100;
	sayi=sayi-(yuzler*100);
	onlar=sayi/10;
	sayi=sayi-(onlar*10);
	birler=sayi/1;
	sayi=sayi-(birler*1);
	
	//////////////////////////////////////////////////////////////////////
	 if(milyar>=yuzmilyon&&milyar>=onmilyon&&milyar>=milyon&&milyar>=yuzbinler&&milyar>=onbinler&&milyar>=binler&&milyar>=yuzler&&milyar>=onlar&&milyar>=birler)
	 {
		cout<<"\n\nEN BÜYÜK RAKAM :"<< milyar<<"(MİLYARLAR BASAMAĞI)"<<endl;
	 }
	 if(yuzmilyon>=milyar&&yuzmilyon>=onmilyon&&yuzmilyon>=milyon&&yuzmilyon>=yuzbinler&&yuzmilyon>=onbinler&&yuzmilyon>=binler&&yuzmilyon>=yuzler&&yuzmilyon>=onlar&&yuzmilyon>=birler)
	 {
	 	cout<<"\n\nEN BÜYÜK RAKAM :"<< yuzmilyon<<"(YÜZMİLYONLAR BASAMAĞI)"<<endl;
	 }
	 if(onmilyon>=milyar&&onmilyon>=yuzmilyon&&onmilyon>=milyon&&onmilyon>=yuzbinler&&onmilyon>=onbinler&&onmilyon>=binler&&onmilyon>=yuzler&&onmilyon>=onlar&&onmilyon>=birler)
	 {
	 	cout<<"\n\nEN BÜYÜK RAKAM :"<< onmilyon<<"(ONMİLYONLAR BASAMAĞI)"<<endl;
	 }
	 if(milyon>=milyar&&milyon>=yuzmilyon&&milyon>=onmilyon&&milyon>=yuzbinler&&milyon>=onbinler&&milyon>=binler&&milyon>=yuzler&&milyon>=onlar&&milyon>=birler)
	 {
	 	cout<<"\n\nEN BÜYÜK RAKAM :"<< milyon<< "(MİLYONLAR BASAMAĞI)"<< endl;
	 }
	 if(yuzbinler>=milyar&&yuzbinler>=yuzmilyon&&yuzbinler>=onmilyon&&yuzbinler>=milyon&&yuzbinler>=onbinler&&yuzbinler>=binler&&yuzbinler>=yuzler&&yuzbinler>=onlar&&yuzbinler>=birler)
	 {
	 	cout<<"\n\nEN BÜYÜK RAKAM :"<< yuzbinler<< "(YÜZBİNLER BASAMAĞI)"<< endl;
	 }
	 if(onbinler>=milyar&&onbinler>=yuzmilyon&&onbinler>=onmilyon&&onbinler>=milyon&&onbinler>=yuzbinler&&onbinler>=binler&&onbinler>=yuzler&&onbinler>=onlar&&onbinler>=birler)
	 {
	 	cout<<"\n\nEN BÜYÜK RAKAM :"<< onbinler<<"(ONBİNLER BASAMAĞI)"<< endl;
	 }
	 if(binler>=milyar&&binler>=yuzmilyon&&binler>=onmilyon&&binler>=milyon&&binler>=yuzbinler&&binler>=onbinler&&binler>=yuzler&&binler>=onlar&&binler>=birler)
	 {
	 	cout<<"\n\nEN BÜYÜK RAKAM :"<< binler<< "(BİNLER BASAMAĞI)"<< endl;
	 }
	 if(yuzler>=milyar&&yuzler>=yuzmilyon&&yuzler>=onmilyon&&yuzler>=milyon&&yuzler>=yuzbinler&&yuzler>=onbinler&&yuzler>=binler&&yuzler>=onlar&&yuzler>=birler)
	 {
	 	cout<<"\n\nEN BÜYÜK RAKAM :"<< yuzler <<"(YÜZLER BASAMAĞI)"<< endl;
	 }
	 if(onlar>=milyar&&onlar>=yuzmilyon&&onlar>=onmilyon&&onlar>=milyon&&onlar>=yuzbinler&&onlar>=onbinler&&onlar>=binler&&onlar>=yuzler&&onlar>=birler)
	 {
	 	cout<<"\n\nEN BÜYÜK RAKAM :"<< onlar<< "(ONLAR BASAMAĞI)"<< endl;
	 }
	 if(birler>=milyar&&birler>=yuzmilyon&&birler>=onmilyon&&birler>=milyon&&birler>=yuzbinler&&birler>=onbinler&&birler>=binler&&birler>=yuzler&&birler>=onlar)
	 {
	 	cout<<"\n\nEN BÜYÜK RAKAM :"<< birler<< "(BİRLER BASAMAĞI)"<< endl;
	 }
cout<<"\n************************************************************\n";



	system("PAUSE");
	return 0;

}


