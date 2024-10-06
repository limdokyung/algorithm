def solution(n):
    x = 1
    while n%x != 1:
        x += 1
    return x

    ## 1부터 시작하여 엔을 나눠봄. 1이 나눠지면 종료되는 와일문 작성? 
    조건은  n%i == 1
