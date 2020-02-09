def gcd(n, m):
    for i in reversed(list(range(1,min(n,m) + 1))):
        if (n % i == 0) and (m % i == 0) :
            return i
    return 1

N = int(input())
ring_input = input()
#ring_list = ring_input.split()

ring_list = []

for j in range(N):
    ring_list.append(int(ring_input.split(' ')[j]))

result = []

for number in range(1,N):
    mom = str(int(ring_list[number] / gcd(ring_list[number], ring_list[0]))) 
    son = str(int(ring_list[0] / gcd(ring_list[number], ring_list[0])))
    result.append(son + "/" + mom)

for r in result:
    print(r)