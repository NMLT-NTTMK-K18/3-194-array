import random
import os

if not os.path.exists('ARRAYS_TEMPLATE'):
    os.mkdir('ARRAYS_TEMPLATE')

os.chdir('ARRAYS_TEMPLATE')

for i in range(1, 14):
    file_name = f'floatdata{i:02}.inp'

    with open(file_name, 'w') as f:
        f.write('5\n')
        for j in range(5):
            f.write(str(random.randint(0, 200)) + " ")