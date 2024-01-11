//#include<iostream>
//#include<vector>
//#include<queue>
//#include<string>
//using namespace std;
//struct Patient 
//{
//	string name;
//	int age;
//	string condt;
//	string prior;
//};
//
//
//void display(queue<Patient>& qu)
//{
//	if (qu.empty())
//	{
//		cout << "nothing in queue" << endl;
//		return;
//	}
//	else
//	{
//				int index = 0;
//				while (!qu.empty())
//				{
//					cout << index << ". " << qu.front().name << "  " << qu.front().age << "  " << qu.front().condt << "  " << qu.front().prior << endl;
//					qu.pop(); 
//					index++;
//				}
//			}
//}
//void arrangequeue(queue<Patient>& pq,queue<Patient>  pqrefc,queue<Patient>  pqrefi,queue<Patient>  pqrefn,queue<Patient>  pqint,queue<Patient>  pqnor, queue<Patient>  pqsenc)
//{
//	int count = 0;
//	bool check = true;
//	while (!pqrefc.empty())
//	{
//		if (count==3)
//		{
//			pq.push(pqsenc.front());
//			pqsenc.pop();
//			count = 0;
//			check = false;
//		}
//		else
//		{
//			pq.push(pqrefc.front());
//			pqrefc.pop();
//		}
//		count++;
//	}
//	while (!pqrefi.empty())
//	{
//		if (count == 3)
//		{
//			pq.push(pqsenc.front());
//			pqsenc.pop();
//			count = 0;
//			check = false;
//		}
//		else
//		{
//			pq.push(pqrefi.front());
//			pqrefi.pop();
//		}
//		count++;
//		}
//		while (!pqrefn.empty())
//		{
//			if (count == 3)
//			{
//				pq.push(pqsenc.front());
//				pqsenc.pop();
//				count = 0;
//				check = false;
//			}
//			else
//			{
//				pq.push(pqrefn.front());
//				pqrefn.pop();
//			}
//			count++;
//			}
//			while (!pqint.empty())
//			{
//				if (count == 3)
//				{
//					pq.push(pqsenc.front());
//					pqsenc.pop();
//					count = 0;
//					check = false;
//				}
//				else
//				{
//					pq.push(pqint.front());
//					pqint.pop();
//				}
//				count++;
//				}
//				while (!pqnor.empty())
//				{
//					if (count == 3)
//					{
//						pq.push(pqsenc.front());
//						pqsenc.pop();
//						count = 0;
//						check = false;
//					}
//					else
//					{
//		pq.push(pqnor.front());
//		pqnor.pop();
//					}
//					count++;
//	}
//				if (check)
//				{
//
//					while (!pqsenc.empty())
//					{
//						pq.push(pqsenc.front());
//						pqsenc.pop();
//					}
//				}
//}
//int main()
//{
//	Patient objp;
//	queue<Patient> pq,pqrefc, pqrefi, pqrefn, pqint,pqnor,pqsenc;
//	int count = 0;
//	int num = 0;
//	do
//	{
//		cout << "1.Input\n-1. to terminate:\n";
//		cout << "Enter -1 to terminate otherwise any no. to continue : ";
//		cin >> num;
//		switch (num)
//		{
//		case 0: 
//		{
//
//			arrangequeue(pq, pqrefc, pqrefi, pqrefn, pqint, pqnor,pqsenc);
//			display(pq);
//			break;
//		}
//		case 1:
//		{
//			cout << "please enter your Name : ";
//			cin >> objp.name;
//			cout << "please enter your age : ";
//			cin >> objp.age;
//			do
//			{
//				cout << "please enter your condition : ";
//				cin >> objp.condt;
//			} while (objp.condt!="nor"&& objp.condt!="cri"&& objp.condt!="inte");
//			do {
//				cout << "please enter prior ref or 0: ";
//				cin >> objp.prior;
//			} while (objp.prior != "ref"&&objp.prior!="0");
//
//			if (objp.prior == "ref" && objp.condt == "cri")
//			{
//				if (objp.age>=55)
//				{
//					pqsenc.push(objp);
//				}
//				else
//				{
//
//					pq.push(objp);
//				}
//			}
//			else if (objp.condt == "cri" && objp.prior == "0")
//				{
//				if (objp.age >= 55)
//				{
//					pqsenc.push(objp);
//				}
//				else
//				{
//
//					pqrefc.push(objp);
//				}
//				}
//			else if (objp.prior == "ref" && objp.condt == "inte")
//			{
//				if (objp.age >= 55)
//				{
//					pqsenc.push(objp);
//				}
//				else
//				{
//
//				pqrefi.push(objp);
//			}
//				}
//			else if (objp.prior == "ref" && objp.condt == "nor")
//			{
//				if (objp.age >= 55)
//				{
//					pqsenc.push(objp);
//				}
//				else
//				{
//
//				pqrefn.push(objp);
//			}
//				}
//			else if (objp.prior == "0" && objp.condt == "inte")
//			{
//				if (objp.age >= 55)
//				{
//					pqsenc.push(objp);
//				}
//				else
//				{
//
//				pqint.push(objp);
//			}
//				}
//			else if (objp.prior == "0" && objp.condt == "nor")
//				{
//				if (objp.age >= 55)
//				{
//					pqsenc.push(objp);
//				}
//				else
//				{
//
//					pqnor.push(objp);
//				}
//				}
//			break;
//		}
//		default:
//			break;
//		}
//	} while (num!=-1);
//	display(pq);
//} 