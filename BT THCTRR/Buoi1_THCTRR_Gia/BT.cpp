#include <iostream>
#include<fstream>
#include<stdio.h>
#include<conio.h>
#include<string>
#include<sstream>
using namespace std;
#define MAX 50
struct Graph
{
	int flag;
	int n;
	int m[MAX][MAX];
};
Graph DocMaTranKe(string fileName)
{
	Graph g;
	ifstream fileIn;
	fileIn.open(fileName, ios::in);
	if (fileIn.fail())
	{
		cout << "\nFile khong ton tai!!";
		g.flag = -1;
		return g;
	}
	fileIn >> g.flag;
	fileIn >> g.n;
	for (int i = 0;i < g.n;i++)
	{
		for (int j = 0;j < g.n;j++)
		{
			fileIn >> g.m[i][j];
		}
	}
	fileIn.close();
	return g;
}
Graph khoi_tao(int n)
{
	Graph a;
	a.n = n;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			a.m[i][j] = 0;
		}
	}
	return a;
}

Graph DocDanhSachCanh(string fileName)
{
	Graph g;
	ifstream fileIn;
	fileIn.open(fileName, ios::in);
	if (fileIn.fail())
	{
		cout << "\nFile khong ton tai";
		g.flag = -1;
		return g;
	}
	int flag, n;
	fileIn >> flag;
	fileIn >> n;
	g = khoi_tao(n);
	g.flag = flag;
	int soCanh;
	fileIn >> soCanh;
	for (int i = 0;i < soCanh;i++)
	{
		int dinhDau, dinhCuoi;
		fileIn >> dinhDau;
		fileIn >> dinhCuoi;
		g.m[dinhDau][dinhCuoi] = 1;
		if (g.flag == 0)
			g.m[dinhCuoi][dinhDau] = 1;
	}
	fileIn.close();
	return g;
}
Graph DocDanhSachKe(string fileName)
{
	Graph g;
	ifstream fileIn;
	fileIn.open(fileName, ios::in);
	if (fileIn.fail())
	{
		cout << "\nFile khong ton tai";
		g.flag = -1;
		return g;
	}
	int flag, n;
	fileIn >> flag;
	fileIn >> n;
	g = khoi_tao(n);
	g.flag = flag;
	string line;
	while (getline(fileIn, line))
	{
		stringstream stream(line);
		int dinhDau;
		stream >> dinhDau;
		while (1)
		{
			int dinhCuoi;
			stream >> dinhCuoi;
			if (!stream)break;
			g.m[dinhDau][dinhCuoi] = 1;
			if (g.flag == 0)
				g.m[dinhCuoi][dinhDau] = 1;
		}

	}
	fileIn.close();
	return g;
}
void menu()
{
	cout << "======================== * MENU * ================================";
	cout << "1.Xay dung struct bieu dien mot do thi";
	cout << "\n2.Xay dung ham doc ma tran ke tu file.";
	cout << "\n3.Xay dung ham doc danh sach canh tu file tra ve do thi theo cau truc  bai 1.";
	cout << "\n4.Xay dung ham doc danh sach ke tu file va tra ve do thi theo cau truc bai tap 1";
	cout << "\n5.Viet ham xuat do thi theo cau truc bai tap 1";
	cout << "\n6.Ghi ra file do thi theo cau truc bai tap 1 thanh ma tran ke.";
	cout << "\n7.Ghi ra file do thi theo cau truc bai tap 1 thanh danh sach sach canh.";
	cout << "\n8.Ghi ra file do thi theo cau truc bai tap 1 thanh danh sach ke.";
	cout << "\n9.Viet ham Ke(g,v) lay thong so la do thi g và dinh v, xuat ra mang chua danh sach cac dinh ke cua v.";
	cout << "\n0.Thoat chuong trinh!\n";
	cout << "======================== * end * ================================\n";
}
void xuatDoThi(Graph g)
{
	int n = g.n;
	cout << "So dinh:" << n << endl;
	if (g.flag)
		cout << "do thi co huong" << endl;
	else
		cout << "Do thi vo huong " << endl;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << g.m[i][j] << "\t";
		}
		cout << endl;
	}
}
void ghiFileMTK(string fileName, Graph g)
{	
	ofstream outFile;
	outFile.open(fileName, ios::out);
	if (!outFile)
	{
		cout << "\nFile khong ton tai" << endl;
		return;
	}
	outFile << g.flag;
	outFile << endl;
	outFile << g.n;
	outFile << endl;
	for (int i = 0;i < g.n;i++)
	{
		for (int j = 0;j < g.n;j++)
		{
			outFile << g.m[i][j];
			outFile << "\t";
		}
		outFile << endl;
	}
	outFile.close();
}
void ghiFileDSC(string fileName, Graph g)
{
	ofstream outFile;
	outFile.open(fileName, ios::out);
	if (!outFile)
	{
		cout << "\nFile khong ton tai" << endl;
		return;
	}
	outFile << g.flag;
	outFile << endl;
	outFile << g.n;
	outFile << endl;
	int sum = 0;
	for (int i = 0;i < g.n;i++)
	{
		for (int j = 0;j < g.n;j++)
		{
			if (g.m[i][j] != 0)
				sum += g.m[i][j];
		}
	}
	outFile << sum / 2;
	outFile << endl;
	for (int i = 0;i < g.n;i++)
	{
		for (int j = i;j < g.n;j++)
		{
			if (g.m[i][j] != 0)
			{
				int dinhDau, dinhCuoi;
				outFile << i;
				outFile << "\t";
				outFile << j;
				outFile << endl;
			}
		}
	}
	outFile.close();
}
void ghiFileDSK(string fileName, Graph g)
{
	ofstream outFile;
	outFile.open(fileName, ios::out);
	if (!outFile)
	{
		cout << "\nFile khong ton tai" << endl;
		return;
	}
	outFile << g.flag;
	outFile << endl;
	outFile << g.n;
	outFile << endl;
	for (int i = 0;i < g.n;i++)
	{
		outFile << i;
		outFile << "\t";
		for (int j = 0;j < g.n;j++)
		{
			if (g.m[i][j] != 0)
			{
				outFile << j;
				outFile << "\t";
			}
		}
		outFile << endl;
	}
	outFile.close();
}
void Ke(Graph g, int k)
{
	cout<<"\nCac dinh ke la:"<<endl;
	for(int j=0;j<g.n;j++)
	{
		if(g.m[k][j]!=0 || g.m[j][k]!=0)
			cout<<"\n"<<k<<j;
	}
}
void main()
{
	Graph g;
	menu();
	int chon;
	do {
		cout << "\nNhap lua chon cua ban: ";
		cin >> chon;
		switch (chon)
		{
		case 1:
			cout << "Da tao cau truc!!";
			break;
		case 2:
		{
			string filename = "Input_mtk.txt";
			g = DocMaTranKe(filename);
			break;
		}
		case 3:
		{
			string filename = "Input_dsc.txt";
			g = DocDanhSachCanh(filename);
			break;
		}
		case 4:
		{
			string filename = "Input_dsk.txt";
			g = DocDanhSachKe(filename);
			break;
		}
		case 5:
			xuatDoThi(g);
			break;
		case 6:
		{
			string nameFile = "output_mtk.txt";
			ghiFileMTK(nameFile,g);
			break;
		}
		case 7:
		{
			string namefile = "output_dsc.txt";
			ghiFileDSC(namefile, g);
			break;
		}
		case 8:
		{
			string namefile = "output_dsk.txt";
			ghiFileDSK(namefile, g);
			break;
		}
		case 9:
		{
			string filename = "Input_mtk.txt";
			g = DocMaTranKe(filename);
			xuatDoThi(g);
			int v;
			cout<<"\nNhap dinh v de xet:"<<endl;
			cin>>v;
			Ke(g,v);
			break;
		}
		default:
			break;
		}
	} while (chon != 0);
	cout << endl;
	getch();
}
