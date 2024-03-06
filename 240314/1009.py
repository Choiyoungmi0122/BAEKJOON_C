import sys 
n = int(sys.stdin.readline())  # int형식으로 입력받는

for _ in range (n):   # n번 반복
    a,b = map(int, sys.stdin.readline().split())  # 띄어쓰기를 통한 입력값 각각 저장
    a = a % 10  # a의 경우 일의자리 숫자가 컴퓨터 자리를 가르키기 때문에, 필요없는 부분은 날림

    if a == 0:
        print("10")  # 10말고는 10이 나오는 경우 없음
    elif a == 1 or a == 5 or a ==6: # 1, 5, 6은 몇번을 제곱해도 마지막 숫자가 같음
        print(a)
    elif a == 4 or a ==9:  # 일의 자리가 두번씩 반복 되는 경우 (4,9)
        if b % 2 == 0:  
            print((a**2) % 10)
        else:           # 4의 경우 4646반복, 9의 경우 9191 반복하므로
            print(a)
    else:  # 나머지 2는 2486, 3은 971, 7은 931 8은 8426 이니까
        b= b%4  # 밑에서 계산을 할때, 5이든 1이든 같은 마지막 자리를 내보내기 때문에, 연산을 줄이기 위해서 b의 값을 걸러줌
        if b % 4 == 0:  # 4개인 경우가 2가지 있어, 먼저 나눔
            print((a**4) %10)
        else:
            print((a**b) %10)


