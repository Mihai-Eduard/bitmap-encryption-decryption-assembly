file_begin:

file_header:
    signature: .ascii "BM"
    file_size: .long 3126 
    reserved1: .word 0
    reserved2: .word 0
    offset: .long 54 

bitmap_header: 
    header_size: .long 40
    width: .long 32
    heigth: .long 32
    reserved3: .word 1
    number_bits: .word 24
    compression: .long 0
    size_of_pixel_data: .long 3072 
    horizontal_res: .long 2835
    vertical_res: .long 2835
    colour_pallete: .long 0
    important_colours: .long 0

pixel_data:
    .skip 3072

file_end:
