#include<iostream>
#include<string>
using namespace std;
 
//bool manbermark=0;//����Ƿ���ע���Ա 
string loginmarknumber ;//��¼��¼ʱ��û��һ��ע��ģ�ע��ʱ���˺� 
 
class information
{
public :
    string num ;//�˺�
    string name;//�û���
    string key;//����
    string ID;//���֤��
    string tel;//�绰����
    double money;//���
    information *next;//��¼��һ�ռ��ַ
};
int cheak_num(string str,information *head)//����˺��Ƿ����
{
 int t=0;//��¼���˺��Ƿ����
 information * p=head;
 if(head==NULL)
  t=0;
 else
 {
  while(p->next!=NULL)//�������˺Ž��б���
  {
   if(p->num!=str)
    p=p->next;
   else
   {t=1;
   break;
   }
  }
  if(t==0)
   if(p->num==str)
    t=1;
 }
 return t;//���˺��Ѿ������򷵻�1�����򷵻�0
}
information * get_information (information *head)//����Ա¼����Ϣ
{
 information *s,*p;
 s=new information;
 cout<<"��¼����Ϣ��"<<endl;
 cout<<"�˺ţ�";
 cin>>s->num;
 cout<<"�û�����";
 cin>>s->name;
 cout<<"���룺";
 cin>>s->key;
 cout<<"���֤�ţ�";
 cin>>s->ID;
 cout<<"�绰���룺";
 cin>>s->tel;
 cout<<"��";
 cin>>s->money;
 cout<<endl<<"====================================��Ϣ¼��ɹ�==============================="<<endl;
 while ( 1 )                                         
 {
  char ch;
  if( head==NULL )
  {
   head = s ;
   //head->next=NULL;//ͷָ�븳ֵ
  }
  else
   p->next = s ;                                             //���½�����������������
  cout<<"�Ƿ����¼����Ϣ   �ǣ�1������2����"<<endl;
  cin>>ch;
  while(ch!='1' && ch!='2'){
   cout<<"�����������Ƿ����¼�� �ǣ�1��  ��2��";
   cin>>ch;
  }
  if(ch=='1'){
  //ѡ����?
   p = s ;// pָ�����������Ľ��
   p->next=NULL;
   s=new information;
   s->next=NULL;
   cout<<"������ע����Ϣ:"<<endl;
   cout<<"�˺ţ�";
   string str111;
   cin>>str111;
   int t;
   t=cheak_num(str111,head);
   while(t==1)            //�������˺Ž����ж� ��ֱ����ע���˺Ų�����Ϊֹ
   {
    cout<<"�˺��Ѵ��ڣ�������ע�᣺";
    cin>>str111;
    t=cheak_num(str111,head);
   }
   s->num=str111;
   cout<<"�û�����";
   cin>>s->name;
   cout<<"���룺";
   cin>>s->key;
   cout<<"���֤��:";
   cin>>s->ID;
   cout<<"�绰����:";
   cin>>s->tel;
   cout<<"���:";
   cin>>s->money;
   cout<<endl;
  }
  else//ѡ�񡰷�
  {
   s->next=NULL;
   break;
  }
  cout<<endl<<"====================================��Ϣ¼��ɹ�==============================="<<endl;
 }
 return head;
}
void output_information (information *head)//��ʾ�����˺���Ϣ
{  
if(head==NULL){
	cout<<"����ע����Ϣ";
    return ; 
} 
int i=1;
 information *s;
 s=head;
 while(s->next!=NULL)
 {
  cout<<"�û�ע����룺"<<i<<endl; 
  cout<<"�˺ţ�"<<s->num<<endl;
  cout<<"�û���: "<<s->name<<endl;
  cout<<"���룺"<<s->key<<endl;
  cout<<"���֤�ţ�"<<s->ID<<endl;
  cout<<"�绰��"<<s->tel<<endl;
  cout<<"��"<<s->money<<endl<<endl;
  s=s->next;
  i++;
 }
 cout<<"�û�ע����룺"<<i<<endl; 
 cout<<"�˺ţ�"<<s->num<<endl;
 cout<<"�û���: "<<s->name<<endl;
 cout<<"���룺"<<s->key<<endl;
 cout<<"���֤�ţ�"<<s->ID<<endl;
 cout<<"�绰��"<<s->tel<<endl;
 cout<<"��"<<s->money<<endl;
}
int check_keys(string number,string keys,information *head)//����˺��Ƿ�����������Ƿ���ȷ
{
 int t=0;
 information *p=head;
 while(p->next!=NULL)
 {
  if(p->num!=number)
   p=p->next;
  else
  {
   if(p->key==keys)
   {t=3;//�˺Ŵ�����������ȷ
   break;
   }
   else
   {t=2;//�˺Ŵ��ڵ������벻��ȷ
   break;
   }
  }
 }
 if(t==0)
  if(p->num==number)
   if(p->key==keys)
    t=3;//�˺Ŵ�����������ȷ
   else
    t=2;//�˺Ŵ��ڵ������벻��ȷ
   return t;
}
void take_money(information * p)//ȡǮ����
{
 double m;
 cout<<"����������";
 cin>>m;
 if(m<=p->money)//�ж��Ƿ񳬹��˺����
 {   p->money=p->money-m;
 cout<<"ȡ��ɹ�"<<endl;
 }
 else
 {
  while(m>p->money)//��ȡǮ�����˻����
  {cout<<"���㣬�����²���"<<endl;
  cout<<"����������";
  cin>>m;
  }
  p->money=p->money-m;//��ȡ�ֺ���������޸�
  cout<<endl<<"======================================ȡ��ɹ�=================================="<<endl;
 }
}
void save_money(information *p)//��Ǯ����
{
 double m;
 cout<<"����������:";
 cin>>m;
 p->money=p->money+m;//����������˻�����޸�
 cout<<endl<<"======================================���ɹ�=================================="<<endl;
}
information*cheak_number(string number,information *head)//�ڹ���Աģʽ�»����ǿͻ�����ȷ�����������ҿͻ���Ϣ
{
 int a=0 ;//����˻��Ƿ����
 information *p=head;
 while(p->next!=NULL)
 {
  if(p->num==number)
  { a=1;
  break;
  }
  else
   p=p->next;
 }
 if(p->num==number)
  a=1;
 if(a==0)
  p=NULL;
 return p;//���������ҵĿͻ���ַ��Ϣ
}
void move_money(information *p,information *head)// ת�˺���                  p�����ڵ�½���˺ŵ�ַ
{
 information *x;//��¼��ת�˺ŵ�ַ
 x=NULL ;
 double m;//ת�˽��
 string str;//ת���˺�
 char ch ;//��¼�û�������Ƿ����ת�˾���
 cout<<"������Ҫת�˵��˺�:";
 cin>>str;
 x=cheak_number(str,head);//��¼������ת�˺õĵ�ַ
 while(x==NULL)//����˻�������
 {
  x=cheak_number(str,head);//��¼������ת�˺õĵ�ַ
  cout<<"�˺Ų����ڣ��Ƿ����²�����(1)��  (2)��"<<endl;
  cin>>ch;
        if(ch=='1')
  {
   cout<<"����������Ҫת�˵��˻���";
   cin>>str;
   x=cheak_number(str,head);//��¼������ת�˺õĵ�ַ
  }
  else
   break;
 }
 if(x!=NULL)//����˻�����
 {
  cout<<"������ת�˽�";
        cin>>m;
  while(p->money<m)
  {cout<<"���㣬����������ת�˽�"<<endl;
  cin>>m;
  }
  x->money=x->money+m ;
  p->money=p->money-m;
  cout<<endl<<"=====================================ת�˳ɹ�================================"<<endl;
 }
}
void revise_information(information *p)//"�޸���Ϣ"
{
 string str,str1;//��¼�û��˺���Ϣ
 char ch;//��¼�û�����
 while(1)
 {
  cout<<"��ѡ��Ҫ�޸ĵ���Ϣ  (1)�˺�  (2)�û���  (3)����  (4)���֤��  (5)�绰 (6)�˳��޸ĵ�ǰ�˻���Ϣ   ";
  cin>>ch;
  while(ch!='1'&&ch!='2'&&ch!='3'&&ch!='4'&&ch!='5'&&ch!='6')//�û�������ҵ��������
  {
   cout<<"������������Ч��ҵ��";
   cin>>ch;
  }
  if( ch=='1')//�޸��˺�
  {
   cout<<"���������˺ţ�";
   cin>>str;
   p->num=str;
   cout<<endl<<"====================================�޸��˺ųɹ�================================"<<endl;
  }
  else
   if( ch=='2')//�޸��û���
   {
    cout<<"�������µ��û�����";
    cin>>str;
    p->name=str;
    cout<<endl<<"===================================�޸��û����ɹ�=============================="<<endl;
   }
   else
    if( ch=='3')//�޸�����
    {
     cout<<"������ԭ���룺";
     cin>>str;
     while(p->key!=str)
     {
      cout<<"��ԭ���벻һ�£�����������ԭ���룺";
      cin>>str;
     }
     cout<<"�����������룺";
     cin>>str;
     cout<<"��ȷ�����룺";
     cin>>str1;
     while(str!=str1)
     {
      cout<<"���һ�����벻ͬ���������趨��";
      cout<<"�����������룺";
      cin>>str;
      cout<<"��ȷ�����룺";
      cin>>str1;
     }
     cout<<endl<<"===============================�趨�ɹ�����Ǻ�������=========================="<<endl;
    }
    else
     if( ch=='4')//�޸����֤��
     {
      cout<<"�����������֤�ţ�";
      cin>>str;
      p->ID=str;
      cout<<endl<<"==================================�޸����֤�ɹ�==============================="<<endl;
     }
     else
      if( ch=='5')//�޸ĵ绰����
      {
       cout<<"�������µ绰���룺";
       cin>>str;
       p->tel=str;
       cout<<endl<<"==================================�绰�����޸ĳɹ�============================="<<endl;
      }
      else
       break;//�˳��޸��˻���Ϣ
 }
}
void show_information(information*p)//��ʾ��ǰ�˻���Ϣ
{
 cout<<"�˺ţ�"<<p->num<<endl;
 cout<<"�û���:"<<p->name<<endl;
 cout<<"���룺"<<p->key<<endl;
 cout<<"���֤�ţ�"<<p->ID<<endl;
 cout<<"�绰��"<<p->tel<<endl;
 cout<<"��"<<p->money<<endl;
}
 
 
void query_money(information *p)//��ʾ��ǰ�˻����
{
 cout<<"�������Ϊ��";
 cout<<p->money<<endl;
}
information* logon(information *head)//�û�ע���˺�
{
 information *s;
 string str;//��¼�˺���Ϣ
 cout<<"������ע���˺ţ�";
 
 cin>>str;
 int t;
 if(head==NULL)//�������������Ϣ��Ĭ��Ϊ��ע����˺Ų�����
  t=0;
 else
  t=cheak_num(str,head);//�ж��˺��Ƿ��Ѿ�����
 while(t==1)//�˺��Ѿ����� ��������
 {
  cout<<"�˺��Ѵ��ڣ�������ע�᣺";
  cin>>str;
  t=cheak_num(str,head);
 }
 if(head==NULL)//�������������Ϣ��Ĭ��Ϊ��ע����˺Ų�����
  t=0;
 else
  t=cheak_num(str,head);//�ж��˺��Ƿ��Ѿ�����
 while(t==1)//�˺��Ѿ����� ��������
 {
  cout<<"���֤�������";
  cin>>str;
  t=cheak_num(str,head);
 }
 s=new information ;//Ϊ�������¿ռ�
 s->num=str;
 if(head==NULL)
   loginmarknumber=str;
 cout<<"�û�����";
 cin>>s->name;
 cout<<"���룺";
 cin>>s->key;
 cout<<"���֤�ţ�";
 cin>>s->ID;
 cout<<"�绰���룺";
 cin>>s->tel;
 cout<<"��";
 cin>>s->money;
 if(head==NULL)//�����ǰ����û���κ���Ϣ  
 {
  head=s;
  head->next=NULL;
 }
 else//����ע��Ĳ��뵱ǰ����
 {
  s->next=head->next;
  head->next=s;
 }
 cout<<endl<<"=====================================ע��ɹ�==================================="<<endl;
 return head;
}
 
 
information * choose(information *head)//��ͨ�û���½�˺��Լ�ѡ����Ҫ��ҵ��
{
 int t,loginmark=0;
 if(head==NULL){//��û��ע���˺� 
 	cout<<endl<<"δ���˻�ע�ᣬ�޷���ɵ�½���ܣ�����ע���˻���Ϣ"<<endl<<"�Ƿ�����ע�᣺��1���ǣ���2���Ժ�ע��"<<endl;
 	int x;
 	cin>>x;
 	while(x!=1&&x!=2){
 		cout<<"������ѡ��";
		 cin>>x; 
 	}
   if(x==1){
   head=logon(head);
   loginmark=1;
   }
   else
	return head ;	
 }
 
 information *p;//p��������¼�����ҵ����˺ŵĵ�ַ��
 string number,keys;//number ��¼��½�˺� keys��¼������
  if(loginmark==0){
  cout<<"�������˺ţ�";
 cin>>number;
 cout<<"�������˺�����:";
 cin>>keys;
 t=check_keys(number,keys,head);       //t��������¼�Ƿ�����˺��Լ������Ƿ���ȷ�ģ����˺Ų������򷵻�0�����˺�������󷵻�2���˺Ŵ�����������ȷʱ����3
 while(t==0||t==2)//����˺Ų����ڻ����������������
 {
  if(t==2)//�û�������������
  {cout<<"����������������������˺ż�����";
  cout<<"�˺�:";
  }
  else//�˺Ų�����
   cout<<"�˺Ų����ڣ������������˺ż�����,�˺�:";
  cin>>number;
  cout<<"����:";
  cin>>keys;
  t=check_keys(number,keys,head);//�����ж����� �˺��Ƿ���ȷ
 } 
 }
 else
 number=loginmarknumber;
    
 cout<<endl<<"==================================��ͨ�û���½�ɹ�=============================="<<endl<<endl;
 cout<<"��ѡ��ҵ��(1)ȡǮ (2)��Ǯ  (3)ת��  (4)�޸���Ϣ  (5)����ѯ (6)��ʾ�˺���Ϣ  (7)�˳��˺�"<<endl;
 p=cheak_number(number,head);       //��¼����½���˺ŵ�ַ
 char ch;      //��¼�û�������ѡ��
 cin>>ch;
 while(1)
 {
  while(ch!='1'&&ch!='2'&&ch!='3'&&ch!='4'&&ch!='5'&&ch!='6'&&ch!='7')//�û�������ҵ������
  {cout<<"��������������ҵ��(1)ȡǮ (2)��Ǯ  (3)ת��  (4)�޸���Ϣ  (5)����ѯ (6)��ʾ�˺���Ϣ  (7)�˳��˺�"<<endl;
  cin>>ch;   //��������ҵ��
  }
  if(ch=='7')    //�˳���ǰ�˻� 
   break;
  else
  {
   switch(ch)
   {
   case '1':take_money(p);break;          //ȡǮ
   case '2':save_money(p);break;          //��Ǯ
   case '3':move_money(p,head);break;     //ת��
   case '4':revise_information(p);break;  //�޸���Ϣ
   case '5':query_money(p);break;         //��ѯ���
   case '6':show_information(p);break;    //�鿴��Ϣ
   }
   cout<<"��ѡ��ҵ��(1)ȡǮ (2)��Ǯ  (3)ת��  (4)�޸���Ϣ  (5)����ѯ (6)��ʾ�˺���Ϣ  (7)�˳��˺�"<<endl;
   cin>>ch;
  }
 }
 return head;
}
 
string change_monitor_keys(string monitor)
{
 string string1,string2;//��¼�û�������������
 cout<<"������ԭ���룺";
 cin>>string1;
 while(string1!=monitor)//�������Ա�������벻��ȷ
 {
  cout<<"��ԭ���벻�����Ƿ���������  (1)��   (2) ��  "<<endl;
  char chra;
  cin>>chra;//��¼�û��Ƿ������½
  while(chra!='1'&&chra!='2')//�ж��û��Ƿ���������
  {
   cout<<"ѡ������������ѡ��(1)��   (2) �� "<<endl;
   cin>>chra;
  }
  if(chra=='1')//������½�����˺�
  {
   cout<<"���ٴ�����ԭ���룺";
   cin>>string1;
  }
  else{//ֹͣ��½
  cout<<endl<<"==================================����δ�޸�===================================="<<endl;
   break;
   }
 }
 if(string1!=monitor)//�˳��޸Ĺ���Ա����
  return monitor;
 cout<<"�����������룺";
 cin>>string1;
 cout<<"���ٴ�����ȷ���޸����룺";
 cin>>string2;
 while(string1!=string2)//�ж�����������������Ƿ�һ��
 {
  cout<<"�����������벻��ͬ����ѡ���Ƿ�����޸ģ�(1)�� (2)��"<<endl;
  char jilu;//��¼�û�ѡ���Ƿ�����޸�
  cin>>jilu;
  while(jilu!='1'&&jilu!='2')//�ж��û��Ƿ�����������������ʾ
  {
   cout<<"������ѡ���Ƿ��޸ģ�(1)�� (2)��"<<endl;
   cin>>jilu;
  }
  if(jilu=='1')//�����޸�����
  {
   cout<<"�����������룺";
   cin>>string1;   
   cout<<"���ٴ�����ȷ���޸����룺";
   cin>>string2;
  }
  else{//�˳��޸�����
   break;
  }
 }
 if(string2==string1)//��������������޸�����һ�£��ɹ��޸�
 {
  monitor=string1;
  cout<<endl<<"====================================�����޸ĳɹ�==============================="<<endl;
 }
 else
  cout<<endl<<"==================================����δ�޸�=============================="<<endl;
 return monitor;
}
void choose_model(information *head,string monitor)//ѡ��ʼ����ҵ��
{
 information *p;
 char ch,mon_cho;//��¼�û�ѡ��
 string str;//�����õ����ǹ���Ա����  �ͻ��˺�
 cout<<"==============================��ӭ�������й���ϵͳ=============================="<<endl;
 while(1)
 {
  cout<<"��ѡ�����ģʽ��"<<endl;
  cout<<"(1)����Աģʽ  (2)��ͨ�û�ģʽ (3)�˳�ϵͳ "<<endl;
  cin>>ch;
  while(ch!='1'&&ch!='2'&&ch!='3')//����û�����������ʾ
  {   cout<<"��ѡ�����ģʽ��"<<endl;
  cout<<"(1)����Աģʽ  (2)��ͨ�û�ģʽ (3)�˳�ϵͳ "<<endl;
  cin>>ch;
  }
  if(ch=='1')//����Աģʽ
  {
   cout<<"���ѽ������Աģʽ"<<endl<<"���������Ա���룺";
   cin>>str;
   if(monitor!=str)
   {
    char judge;//������¼ѡ��
    while(monitor!=str)//�жϹ���Ա�����Ƿ���ȷ
    {
     cout<<"����Ա������������Ƿ���������   (1)��   (2)��"<<endl;//�˴����ǵ������ǿͻ���С�Ľ������ѡ���˳�����Աģʽ
     cin>>judge;
     while(judge!='1'&&judge!='2')//����û���������,��ʾ
     {
      cout<<"������ѡ���Ƿ�������������  (1)��   (2)��"<<endl;
     }
     if(judge=='1')//������������
     {
      cout<<"�������������Ա����:";
      cin>>str;//�����������Ա����
     }
     else
     {break;//��������������ѭ��
     }
    }
   }
   if(monitor==str)//�ɹ���½����Ա
   {
    cout<<endl<<"==================================����Ա��½�ɹ�==============================="<<endl;
    while(1)
    {
     
     cout<<endl<<endl<<"������Ҫִ�еĲ���"<<endl;
     cout<<"(1)�ͻ���Ϣ¼��  (2)����ͻ���Ϣ  (3)�޸Ĺ���Ա���� (4)��ʾ�����˻���Ϣ  (5)�˳�����Աģʽ"<<endl;
     
     cin>>mon_cho;//��¼�û�ѡ��
     while(mon_cho!='1'&&mon_cho!='2'&&mon_cho!='3'&&mon_cho!='4'&&mon_cho!='5')//����û�����������ʾ
     {
      cout<<endl<<endl<<"������ѡ��ģʽ"<<endl;
      cout<<"(1)�ͻ���Ϣ¼��  (2)����ͻ���Ϣ  (3)�޸Ĺ���Ա����  (4)��ʾ�����˻���Ϣ  (5)�˳�����Աģʽ"<<endl;
      cin>>mon_cho;
     }
     if(mon_cho=='1')//�ͻ���Ϣ¼��
      head=get_information(head);
     else
      if(mon_cho=='2')//�����˻���Ϣ
      {
       if(head==NULL){
       	cout<<"�Բ������������˻�ע����Ϣ���ò����޷�ִ��"<<endl;
       	continue; 
       }
       cout<<"������Ҫ�޸ĵĿͻ��˺ţ�";
       cin>>str;
       p=cheak_number(str,head);//�ж��˻��Ƿ����
       while(p==NULL)//�˻������ڣ���ʾ��������
       {
        cout<<"���˺Ų����ڣ����������룺";
        cin>>str;
        p=cheak_number(str,head);
       }
       revise_information(p);//�޸��Ѵ��ڵ��˻���Ϣ
      }
      else
       if(mon_cho=='5')//��������Աģʽ
        break;
       else
        
        if(mon_cho=='4')//��������˻���Ϣ
         output_information (head);
        else//�޸Ĺ���Ա����
         monitor=change_monitor_keys(monitor);
        
    }
   }
  }
  else
   if(ch=='2')//ѡ����ͨ�ͻ�ģʽ
   {
    char jilu;//��¼�û���ѡҵ��
    cout<<"==============================��ӭ�������й���ϵͳ=============================="<<endl;
    while(1)
    {
     cout<<"��ѡ����Ҫҵ��(1) ע��  (2) ��¼ (3)�˳���ͨ�û�ģʽ "<<endl;
     cin>>jilu;
     while(jilu!='1'&&jilu!='2'&&jilu!='3')//�ж��û������,��ʾ
     {
      cout<<"�������������ѡ��ҵ�񣺣�(1) ע��  (2) ��¼ (3)�˳���ͨ�û�ģʽ "<<endl;
      cin>>jilu;
     }
     if(jilu=='1')//ע��
      head=logon(head);
     else
      if(jilu=='2')//��½
       head=choose(head);
      else
       break;//�˳���ͨ�û�ģʽ
    }
   }
   else //�˳���ϵͳ
    break;
  }
  
}
int main ()
{   information *head=NULL;
string monitor="123";//monitorΪ����Ա��ʼ����
choose_model(head,monitor);
return 0;
}
