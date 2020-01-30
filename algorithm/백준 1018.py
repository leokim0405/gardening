array = []
complete_list1 = []
complete_list2 = []

input_ = input()
line = int(input_.split(' ')[0])
row = int(input_.split(' ')[1])         #세로길이와 가로길이를 입력받는다.

for l in range(line):
	array.append(input())           #주어진 바둑판

for y in range(line):           #완벽한 바둑판 만들기
	temp_line1 = ""
	temp_line2 = ""
	for x in range(row):
		if x % 2 == 0:      #번갈아서 wbwb 와 bwbw를 만듦
			temp_line1 += "W"
			temp_line2 += "B"
		else:
			temp_line1 += "B"
			temp_line2 += "W"
	if y % 2 == 0:
		complete_list1.append(temp_line1)       #w로 시작하는 줄 다음줄은
		complete_list2.append(temp_line2)      
		complete_list1.append(temp_line2)        #b로 시작하도록 함
		complete_list2.append(temp_line1)

count1 = 0
count2 = 0
count_list = []

for l1 in range(line-7):                #8*8크기로 주어진 바둑판을 자를 것이므로
	for r1 in range(row-7):             #왼쪽 위 좌표를 기준으로 자른다   
		for l2 in range(l1,	l1+8):
			for r2 in range(r1,r1+8):
				if array[l2][r2] != complete_list1[l2][r2]:
					count1 += 1
				if array[l2][r2] != complete_list2[l2][r2]:
					count2 += 1
		count_list.append(min(count1,count2))       #두 수중 작은 것을 저장
		count1= 0
		count2 = 0

print(min(count_list))          #최소값을 출력