def hex_to_indexed_byte_column_with_binary(hex_stream):
    # Remove spaces and newlines
    cleaned = hex_stream.replace(" ", "").replace("\n", "")

    # Check for even length
    if len(cleaned) % 2 != 0:
        print("Invalid hex string: must have even number of characters")
        return

    # Print header
    print(f"{'Index':>5}  {'Byte':>5}  {'Binary':>10}")
    print("-" * 24)

    # Print each byte with index and binary
    for index in range(0, len(cleaned), 2):
        byte_str = cleaned[index:index+2].upper()
        byte_val = int(byte_str, 16)
        binary_str = format(byte_val, '08b')
        print(f"{(index//2)+1:5}  {byte_str:>5}  {binary_str:>10}")

if __name__ == "__main__":
    # Hardcoded hex stream
    hex_input = (
            "CE36480A000B0101 2840000000000000 0000000000000000 0000000000000000"
            "0000000000000000 0000002800000000"
    )
    hex_to_indexed_byte_column_with_binary(hex_input)

