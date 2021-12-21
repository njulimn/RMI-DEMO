#!!!!! Important!!!!! Your python version must be >3.5 to run this script

def size_in_bytes(type):
    if(type=='uint32'):
        return 4
    else:
        return 8

def generator(data_num):
    data_type = "uint32"
    byte = size_in_bytes(data_type) # get the size in byts of given type

    #random generate data num
    file = open(str(data_num)+'_'+data_type,'wb') # generate 10000_uint32 binary file
    
    # first write the num of items with fixed 8 bytes
    file.write((data_num).to_bytes(8, byteorder='little', signed=False))
    
    # then write all items with size according to their type
    for num in range(data_num):
        file.write((num).to_bytes(byte, byteorder='little', signed=False))

if __name__=="__main__":
    generator(10000)
