//#define _CRT_NONSTDC_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<conio.h> 
//#include<time.h>
//#include<math.h>
//#define MAX 50 
//
////Co dung DevC de tranh bi loi 
////Cau 1  
//void Nhapmatran(int a[][MAX], int &m, int &n)
//{
//	for(int i = 0; i < m; i++)
//		for(int j = 0; j < n; j++)
//		{
//			printf("Nhap vao a[%d][%d]: ", i, j);
//			scanf("%d", &a[i][j]);
//		}
//}
//void Xuatmatran(int a[][MAX], int m, int n)
//{
//	for(int i = 0; i < m; i++)
//	{
//		for(int j = 0; j < n; j++)
//		{
//			printf("%5d ", a[i][j]);
//		}
//		printf("\n");
//	}
//}
//void Matrantudong(int a[][MAX], int &m, int &n)
//{
//	do
//	{
//		printf("Nhap so dong ma tran: ");
//		scanf("%d", &m);
//		printf("Nhap so cot ma tran: ");
//		scanf("%d", &n);
//	}while(m <= 0 || n <= 0);
//	srand((unsigned)time(NULL));
//	for(int i = 0; i < m; i++)
//		for(int j = 0; j < n; j++)
//		{
//			a[i][j]=rand()%199 -99 ;
//		}
//}
//void Docfilematran(int a[][MAX], int &m, int &n)
//{
//	FILE *f = fopen("matran.txt", "rt");
//	if(!f)
//	{
//		printf("Loi doc file.");
//		return;
//	}
//	fscanf(f, "%d", &m);
//	fscanf(f, "%d", &n);
//	for(int i = 0; i < m; i++)
//		for(int j = 0; j < n; j++)
//			fscanf(f, "%d ", &a[i][j]);
//	fclose(f);
//}
////Cau 4 
//int Ktrasnt(int n)
//{
//    if(n < 2) return(0);
//    int i;
//    for(i = 2; i <= n / 2; i++)
//        if(n % i == 0) return(0);
//    return(1);
//}
//void DongTBNSNTMAX(int a[][MAX], int m, int n)
//{
//	float tbn, tbnd, max;
//	int maxdong, dem = 0;
//	float nhan = 1;
//	for(int i = 0; i < m; i++)
//		if(Ktrasnt(a[0][i]))
//		{
//			dem++;
//			nhan = nhan * a[0][i];
//		}
//	tbn = pow(nhan, (float)1.0 / dem);
//	max = tbn;//tich dong dau tien 
//	for(int i = 1; i < m; i++)
//	{
//		dem = 0;
//		nhan = 1;
//		for(int j = 0; j < n; j++)
//		{
//			if(Ktrasnt(a[i][j]))
//			{
//				dem++;
//				nhan = nhan * a[i][j];
//			}
//		}
//		tbnd = pow(nhan, (float)1.0 / dem); 
//		if(max < tbnd)
//		{
//			max = nhan;
//			maxdong = i;
//		}
//	}
//	if(maxdong == 32)
//	{
//		printf("Dong co trung binh nhan so nguyen to lon nhat = 1");
//	}
//	else if(maxdong == 68)
//	{
//		printf("Khong co dong nao co trung binh nhan so nguyen to\n");
//	}
//	else
//	{
//		printf("Dong co trung binh nhan cac so nguyen to lon nhat: %d\n", maxdong + 1);
//	}
//
//}
//
////Cau 9 
//void Xoayvongtrai(int a[][MAX], int m, int n, int &k, int f[][MAX])
//{
//	for(int i = 0; i < m; i++)
//	{
//		for(int j = 0; j < n; j++)
//		{
//			f[i][j] = a[i][j];
//		}
//	}
//	while(k--)
//	{
//		int temp[MAX];
//		for(int i = 0; i < m; i++)
//		{
//			temp[i] = f[i][0];	
//		}
//		for(int i = 0; i < m; i++)
//		{
//			for(int j = 0; j < n - 1; j++)
//			{
//				f[i][j] = f[i][j + 1];
//			}
//		}
//		for(int i = 0; i < m; i++)
//		{
//			f[i][n - 1] = temp[i];
//		}
//	}
//} 
//
////Cau 5 
//void swap_matrix(int &a , int &b){
//	int temp = a ;
//	a = b ;
//	b = temp ;
//}
//void swap_column(int a[][MAX] , int m, int n){
//	int cot1 , cot2 ;
//	do{
//		printf("\nNhap cot 1 muon hoan vi: ") ; scanf("%d",&cot1) ;
//		printf("Nhap cot 2 muon hoan vi: ") ; scanf("%d",&cot2) ;
//	}while(cot1 < 0 || cot2 < 0 || cot1 >= n || cot2 >= n ) ;
//	  for(int i = 0 ; i < n;i++){
//	  	swap_matrix(a[i][cot1],a[i][cot2]) ;
//	  }
//	  printf("\nMa tran sau khi hoan vi\n") ;
//	  Xuatmatran(a, m, n);
//}
//
////Cau 2 
//void nhom_8_bai1_cau2( int a[][MAX], int m, int n){
//	int sum = 0;
//	float tbc;
//	int sochia = 0;
//	//tinh 4 bien
//		for (int i =0; i < n; i++){
//			sum+=a[0][i];
//			sochia++;
//		}
//		for (int i = 0; i < n; i++){
//			sum+=a[n-1][i];
//			sochia++;
//		}
//		for (int i = 1; i < m - 1; i++){
//			sum+=a[i][0];
//			sochia++;
//		}
//		for (int i = 1; i < m - 1; i++){
//			sum+=a[i][n - 1];
//			sochia++;
//		}
//		//nen ma tran vuong thi tinh duong cheo chinh va phu
//	if(m == n)
//	{
//		for (int i =1; i < m -1;i++)
//		{
//			for(int j = 1;j < n;j++)
//			{
//				if (i == j){
//					sum+=a[i][j];
//					sochia++;
//				}
//			}
//		}
//		for (int i = 1; i < m -1;i++)
//		{
//			for(int j = 1;j < n;j++)
//			{
//				if (i + j == n - 2)
//				{
//					sum+=a[i][j];
//					sochia++;		
//				}
//			}
//		}
//		if (m % 2 && n % 2)
//		{
//			sum = sum - a[(m-1)/2][(n-1)/2];
//		}
//	tbc = (float)sum/sochia;
//	printf("\nTrung binh cong 4 bien va duong cheo chinh va duong cheo phu la : %2.f\n ",tbc);
//	}
//	else
//	{
//		tbc = (float)sum/sochia;
//		printf("\nTrung binh cong 4 bien la : %2.f\n ",tbc);
//	}
//}
//
////Cau 3 
//int check_sothinhvuong (int n)
//{
//	if(n < 0) return 0;
//	int sum = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			sum = sum + i;
//		}
//	}
//	if (sum > n)
//	{
//		return 1;
//	}
//	return 0;
//}
//void kiemtracot_lasothinhvuong (int a[][MAX], int m, int n)
//{
//	bool flag = true;
//	for (int j = 0; j < n; j++)
//	{
//		flag = false;
//		printf("So thinh vuong trong cot %d la: ", j);
//		for (int i = 0; i < m; i++)
//		{
//			int b = check_sothinhvuong(a[i][j]);
//			if (b == 1)
//			{
//				printf("%d  ", a[i][j]);
//				flag = true;
//			}
//		}
//		if (flag == false)	
//		{
//			printf("Khong tim thay so thinh vuong nao");
//		}
//			printf("\n");
//	}
//}
//
////Cau 6 
//void nhom_8_bai1_cau6 (int a[][MAX], int m, int n )
//{
//	int b[MAX][MAX];
//	for (int i = 0; i < m; i++)
//	{
//		for(int j = 0; j < n;j++)
//		{
//			b[i][j]=a[i][j];		
//		}
//	}
//
//	for (int i = 0; i< m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (b[i][j]%2)
//			{
//				for (int u = j+1; u < n; u++)
//				{
//					if(b[i][u]%2 && b[i][u]>b[i][j])
//						swap_matrix (b[i][u],b[i][j]);
//				}
//			}
//			else 
//			{
//				for (int u = j+1;u < n; u++)
//				{
//					if(b[i][u]%2 == 0 && b[i][u]<b[i][j])
//						swap_matrix (b[i][u],b[i][j]);
//				}
//			}
//		}
//	}	
//	printf("Noi dung mang B:\n");
//        for (int i = 0; i < m; i++)
//		{
//            for(int j = 0; j < n ; j++)
//			{
//                printf("%d ", b[i][j]);       
//            }
//            printf("\n");
//        }
//
//}
//
////Cau 7 
//void CDuongDAm(int a[][MAX], int m, int n, int c[][MAX], int d[][MAX])
//{
//	for(int i = 0; i < m; i++)
//	{
//		for(int j = 0; j < n; j++)
//		{
//			if(a[i][j] >= 0)
//				c[i][j] = a[i][j];
//			else 
//				d[i][j] = a[i][j];
//		}
//	}
//	printf("Ma tran C toan duong\n");
//	for(int i = 0; i < m; i++)
//	{
//		for(int j = 0; j < n; j++)
//		{
//			printf("%d ", c[i][j]);
//		}
//		printf("\n");
//	}
//	printf("=====================\n");
//	printf("Ma tran D toan am\n");
//	for(int i = 0; i < m; i++)
//	{
//		for(int j = 0; j < n; j++)
//		{
//			printf("%d ", d[i][j]);
//		}
//		printf("\n");
//	}
//} 
//
//int Demsolanxuathien_EtrongA (int a[][MAX], int e[][MAX], int aRow, int aCol, int eRow, int eCol)
//{
//	bool check;
//	int count = 0;
//	for (int iaRow = 0; iaRow < aRow; iaRow++)
//	{
//		for (int jaCol = 0; jaCol < aCol; jaCol++)
//		{
//			check = true;
//			for (int ieRow = 0; ieRow < eRow; ieRow++)
//			{
//				for (int jeCol = 0; jeCol < eCol; jeCol++)
//				{
//					if (e[ieRow][jeCol] != a[iaRow + ieRow][jaCol + jeCol])
//					{
//						check = false;
//						break;
//					}
//				}
//				if (check == false)
//				{
//					break;
//				}
//			}
//			if (check == true)
//			{
//				count++;
//			}
//		}
//	}
//	return count;
//}
//
////Cau 10 
//void matrix_xoanOc_nguoc(int a[][MAX] ,int m ,int n){
//		int i,j,b=0,c=0,b1,b2;
//	    printf("\nMa tran sau khi xoan oc nguoi chieu kim dong ho\n") ;
//	b1=n-1;
//	b2=n-1;
//	m=n*n;
//	while(b<=n/2){
//		for(i=b;i<=b2;i++){ //hangdau
//			a[b][i]=m;
//			m--;
//		}
//		for(i=b+1;i<=b1;i++){//doc
//			a[i][b2]=m;
//			m--;
//		}
//		for(i=b2-1;i>=b;i--){//ngang
//			a[b1][i]=m;
//			m--;
//		}
//		for(i=b1-1;i>b;i--){//doclen
//			a[i][b]=m;
//			m--;
//		}
//		b++;
//		b1--;
//		b2--;
//	}
//		for(i=0;i<n;i++){
//			for(j=0;j<n;j++){
//				printf("\t%d ",a[i][j]);
//			}
//			printf("\n");
//		}
//} 
//int main()
//{
//	int a[MAX][MAX], b[MAX][MAX], e[MAX][MAX], c[MAX][MAX], d[MAX][MAX], f[MAX][MAX], chon, n, k, m, aRow, aCol;
//	do
//	{
//		printf("\t\t\t\t\t\t\t=====================MENU====================\n");
//		printf("\t\t\t|1.Nhap xuat A.                                                                                                             |\n");
//		printf("\t\t\t|2.Tinh gia tri trung binh cong cua cac phan tu tren 4 bien, duong cheo chinh duong cheo phu.                               |\n");
//		printf("\t\t\t|3.Liet ke danh sach phan tu cua tung cot chua toan bo so thinh vuong.                                                      |\n");
//		printf("\t\t\t|4.Hay cho biet dong co chua gia tri trung binh nhan cua so nguyen to lon nhat                                              |\n");
//		printf("\t\t\t|5.Hay hoan vi hai cot c1 va c2 bat ky cua A (c1 > 0, c2 > 0 duoc nhap tu ban phim).                                        |\n");
//		printf("\t\t\t|6.Tu A tao va xuat mot ma tran B sao cho tung dong phai duoc sap xep tat ca cac gia tri chan tang dan va le giam dan.      |\n");
//		printf("\t\t\t|7.Tu A hay tao ra va xuat ra 2 ma tran C, D(cung kich thuoc) sao cho: C chua toan so duong ca D chua so am.                |\n");
//		printf("\t\t\t|8.Tao mot ma tran E co kich thuoc la x dong X y cot. Dem so lan xuat hien cua E trong A.                                   |\n");
//		printf("\t\t\t|9.Tu A da cho tao ra va xuat ra mot ma tran F duoc dich xoay vong cac cot theo truc dung voi chieu tu trai sang phai k lan.|\n");
//		printf("\t\t\t|10. Tu A da cho hay tao ra va xuat ra mot ma tran I duoc xoan oc giam dan nguoc chieu kim dong ho.                         |\n");
//		printf("\t\t\t|0.Bam phim so 0 de thoat khoi chuong trinh.                                                                                |\n");
//		printf("\t\t\t\t\t\t\t============================================\n");
//		printf("Lua chon cua ban la: ");
//		scanf("%d", &chon);
//		switch(chon)
//		{
//			case 1:
//				int choose;
//				printf("1. Nhap xuat ma tran tu ban phim.\n");
//				printf("2. Tao ngau nhien.\n");
//				printf("3. Doc tu file.\n");
//				printf("Lua chon cua ban la: ");
//				scanf("%d", &choose); 
//				switch(choose)
//				{
//					case 1:
//						do
//						{
//							printf("Nhap vao so dong: ");
//							scanf("%d", &m);
//							printf("Nhap vao so cot: ");
//							scanf("%d", &n);
//						}while(m <= 0 || n <= 0);
//						Nhapmatran(a, m, n);
//						Xuatmatran(a, m, n);
//						break;
//					case 2:
//						Matrantudong(a, m, n);
//						Xuatmatran(a, m, n);
//						break;
//					case 3:
//						Docfilematran(a, m, n);
//						Xuatmatran(a, m, n);
//						break;
//				}
//				break;
//			case 2:
//				{
//					nhom_8_bai1_cau2(a, m, n);
//					break;
//				}
//			case 3:
//				{
//					kiemtracot_lasothinhvuong(a, m, n);
//					break;
//				}
//			case 4:
//				DongTBNSNTMAX(a, m, n);
//				break;
//			case 5:
//				swap_column(a, m, n);
//				break;
//			case 6:
//				nhom_8_bai1_cau6 (a, m, n);
//				break;
//			case 7:
//				CDuongDAm(a, m, n, c, d);
//				break;
//			case 8:
//				{
//					int eRow, eCol;
//					printf("Nhap so dong: ");
//					scanf("%d", &eRow);
//					printf("Nhap so cot: ");
//					scanf("%d", &eCol);
//					Nhapmatran(e, eRow, eCol);
//					printf("Mang 2 chieu E vua nhap la:\n");
//					Xuatmatran(e, eRow, eCol);
//					int temp = Demsolanxuathien_EtrongA(a, e, m, n, eRow, eCol);
//					if (temp == Demsolanxuathien_EtrongA(a, e, m, n, eRow,eCol))
//					{
//						printf("So lan xuat hien cua ma tran E trong ma tran A la: %d\n", temp);
//					}
//					else
//					{
//						printf("Ma tran E ko xuat hien trong ma tran A\n");
//					}
//					break;
//				}
//			case 9:
//				{
//					do
//					{ 
//						printf("Nhap vao so lan muon dich trai(>0): ");
//						scanf("%d", &k);
//					}while(k < 0);
//					Xoayvongtrai(a, m, n, k, f);
//					Xuatmatran(f, m, n);
//				break;
//				}
//			case 10:
//				matrix_xoanOc_nguoc(a ,m , n);
//				break;
//			case 0:
//				printf("\t\t\t\t\t\t\tCAM ON CAC BAN DA SU DUNG CHUONG TRINH DEN TU NHOM 8\n");
//				return 0;
//				break; 
//		}
//	}
//	while(chon != 0);
//}
//
