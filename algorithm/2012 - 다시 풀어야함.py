N = int(input())

expect_list = []
total_dis = 0

for _ in range(N):
    expect_list.append(int(input()))

expect_list.sort()

for rank in range(1,N+1):
    total_dis += abs(expect_list[rank] - rank)

print(total_dis)