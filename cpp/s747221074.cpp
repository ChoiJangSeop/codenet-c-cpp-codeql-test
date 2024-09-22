
N=[]

while True:

    
    for i in range(1,4):
        print("1から9の任意の自然数を入力せよ。また処理を終了する場合はqを入力せよ。")
        n=input(i)
        
        if n=="q":
            break
        
        if n=="1":
            N.append("9")
        elif n=="9":
            N.append("1")
        else:
            N.append(n)

    print("".join(N))

    N=[]

    if n=="q":
        break

    
