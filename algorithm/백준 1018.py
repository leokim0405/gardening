array = []
complete_list1 = []
complete_list2 = []

input_ = input()
line = int(input_.split(' ')[0])
row = int(input_.split(' ')[1])

for l in range(line):
	array.append(input())

for y in range(line):
	temp_line1 = ""
	temp_line2 = ""
	for x in range(row):
		if x % 2 == 0:
			temp_line1 += "W"
			temp_line2 += "B"
		else:
			temp_line1 += "B"
			temp_line2 += "W"
	if y % 2 == 0:
		complete_list1.append(temp_line1)
		complete_list2.append(temp_line2)
	else:
		complete_list1.append(temp_line2)
		complete_list2.append(temp_line1)

count1 = 0
count2 = 0
min_count = 0
count_list = []
for l1 in range(line-7):
	for r1 in range(row-7):
		for l2 in range(l1,	l1+8):
			for r2 in range(r1,r1+8):
				if array[l2][r2] != complete_list1[l2][r2]:
					count1 += 1
				if array[l2][r2] != complete_list2[l2][r2]:
					count2 += 1
		min_count = min(count1,count2)
		count_list.append(min_count)
		count1= 0
		count2 = 0

print(min(count_list))