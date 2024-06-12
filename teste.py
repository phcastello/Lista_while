import time

start_time = time.time()

i = 0
while i <= 100000:
    print(i)
    i += 1

end_time = time.time()

duration = end_time - start_time
print(f"Tempo gasto: {duration: .6f} segundos")