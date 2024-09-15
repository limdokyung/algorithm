def solution():
	pass

def answer_1():
	answer_1 = []
	value = 1
	for _ in range(len(answers)):
		answer_1[].append(value)
		value += 1
		if value >  5:
			value = 1
	return answer_1

def answer_2():
	answer_2 = [0] * len(answers)
	value = 1
	for i in range(len(answers[]):
		if (i+1)%2 != 0:
			answer_2[i] = 2
		elif (i+1)%2 == 0:
			if value == 5:
				value = 1
			answer_2[i] = value
		if value == 1:
			value = value + 2
		value++
	return answer_2

def answer_3():
	value = 3
	answer_3 = [0] * len(answers)
	for i in range(len(answers)):
		answer_3[i] = value
	pass
