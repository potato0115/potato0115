#include<bits/stdc++.h>
using namespace std;
int a[100005],x=1,y=1;
int main(){
	string s;
	cin>>s;
	int l=s.size();
	int xx=0,yy=0;
	int n=l;
	for(int i=1;i<=l;i++){
		a[i]=s[i-1]-'0';
		if(a[i]==1){
			xx++;
		}
		else{
			yy++;
		}
	}
	if(yy==0||xx==0){
		int cnt=0;
		for(int i=1;i<=l;i++){
			cnt+=i;
		}
		cout<<cnt;
		return 0;
	}
	for(int i=2;i<=n;i++){
		if(a[i]==a[1]){
			x++;
		}
		else{
			break;
		}
	}
	for(int i=n-1;i>=1;i--){
		if(a[i]==a[n]){
			y++;
		}
		else{
			break;
		}
	}
//	cout<<x<<" "<<y<<endl;
	int mx=xx,my=yy;
//	cout<<mx<<" "<<my<<endl;
	if(a[1]==1){
		mx-=x;
	}
	else{
		my-=x;
	}
	if(a[n]==1){
		mx-=y;
	}
	else{
		my-=y;
	}
//	cout<<mx<<" "<<my<<endl;
	int cnt=0;
	y=n-y;
	if(mx>my){
//		cout<<"a"<<endl;
		int w=0;
		if(a[1]==1){
//			cout<<"1  ";
			for(int i=1;i<=y;i++){
				if(a[i]!=1){
					w++;
					continue;
				}
//				cout<<i-x<<" ";
				cnt+=i-w;
			}
//			cout<<endl<<y<<" "<<n<<" "<<endl;
			for(int i=y;i<n;i++){
//				cout<<i-y+1<<" ";
				cnt+=i-y+1;
			}
//			cout<<endl;
		}
		else if(a[n]==1){
//			cout<<"B"<<endl;
			for(int i=x+1;i<=n;i++){
				if(a[i]!=1){
					w++;
					continue;
				}
				cnt+=i-x-w;
			}
			for(int i=1;i<=x;i++){
				cnt+=i;
			}
		}
		else{
//			cout<<"C"<<endl;
			for(int i=x+1;i<=y;i++){
				if(a[i]!=1){
					w++;
					continue;
				}
				cnt+=i-x-w;
			}
			for(int i=1;i<=x;i++){
				cnt+=i;
			}
			for(int i=y;i<n;i++){
				cnt+=i-y+1;
			}
		}
	}
	else if(my>mx){
//		cout<<"b"<<endl;
		int w=0;
		if(a[1]==0){
//			cout<<"1  ";
			for(int i=1;i<=y;i++){
				if(a[i]!=0){
					w++;
					continue;
				}
//				cout<<i-x<<" ";
				cnt+=i-w;
			}
//			cout<<endl<<y<<" "<<n<<" "<<endl;
			for(int i=y;i<n;i++){
//				cout<<i-y+1<<" ";
				cnt+=i-y+1;
			}
//			cout<<endl;
		}
		else if(a[n]==0){
//			cout<<"B"<<endl;
			for(int i=x+1;i<=n;i++){
				if(a[i]!=0){
					w++;
					continue;
				}
				cnt+=i-x-w;
			}
			for(int i=1;i<=x;i++){
				cnt+=i;
			}
		}
		else{
////			cout<<"C"<<endl;
			for(int i=x+1;i<=y;i++){
				if(a[i]!=0){
					w++;
					continue;
				}
				cnt+=i-x-w;
			}
			for(int i=1;i<=x;i++){
				cnt+=i;
			}
			for(int i=y;i<n;i++){
				cnt+=i-y+1;
			}
		}
	}
	else{
//		cout<<"c"<<endl;
		int w=0;
		int maxx=0;
		if(a[1]==0&&a[n]==0){
//			cout<<"1  ";
			for(int i=x+1;i<=y;i++){
				if(a[i]!=1){
					w++;
					continue;
				}
				cnt+=i-x-w;
			}
			for(int i=1;i<=x;i++){
				cnt+=i;
			}
			for(int i=y;i<n;i++){
				cnt+=i-y+1;
			}
		}
		maxx=max(maxx,cnt);
		cnt=0;
		if(a[1]==1&&a[n]==1){
//			cout<<"B"<<endl;
			for(int i=x+1;i<=y;i++){
				if(a[i]!=0){
					w++;
					continue;
				}
				cnt+=i-x-w;
			}
			for(int i=1;i<=x;i++){
				cnt+=i;
			}
			for(int i=y;i<n;i++){
				cnt+=i-y+1;
			}
		}
		maxx=max(maxx,cnt);
		cnt=0;
		if(a[1]==0&&a[n]==1){
			if(x>y){
			for(int i=x+1;i<=y;i++){
				if(a[i]!=0){
					w++;
					continue;
				}
				cnt+=i-x-w;
			}
			for(int i=1;i<=x;i++){
				cnt+=i;
			}
			for(int i=y;i<n;i++){
				cnt+=i-y+1;
			}
			}
			else{
				for(int i=x+1;i<=y;i++){
				if(a[i]!=1){
					w++;
					continue;
				}
				cnt+=i-x-w;
			}
			for(int i=1;i<=x;i++){
				cnt+=i;
			}
			for(int i=y;i<n;i++){
				cnt+=i-y+1;
			}
			}
//			cout<<"C"<<endl;
			
		}
		maxx=max(maxx,cnt);
		cnt=0;
		cout<<maxx;
		return 0;
	}
	cout<<cnt;
}
