#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// HERE IS THE IDEA
	// We mark every composite number from 2 to LLONG_MAX
	ll N, K;
	cin >> N >> K;
	vector<ll> primes;
	primes.reserve((N-1)*K+1);
	vector<bool> is_prime(N*N*K*K, true);
	for(int i = 2, pc=0; pc < (N-1)*K+1; i++){
		// check if i is prime
		// if it is, pc++ and mark multiples of i as false
		// now the matter is here, how far the multiples should be marked, because we wouldn't know the max number
		// just because it is (n-1)*k + 1, doesnt mean that is the max num, because it just the max value of prime numbers
		if(is_prime[i]){
			pc++;
			primes.push_back(i);
			for(int j = i*i; j <= (N*N*K*K); j+=i){
				is_prime[j] = false;
			}
		}
	}
	for(auto it = primes.begin(); it != primes.end(); it++) cout << *it << " ";
	cout << "\n";
	for(int i = 0, j = 1; i < (N-1)*K+1; i = (j-1)*K+1){
		cout << primes[i] << "\n";
	}
	return 0;
}