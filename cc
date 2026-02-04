def caesar_cipher(text, shift, mode):
    result = ""

    for char in text:
        if char.isalpha():
            # Check uppercase or lowercase
            base = ord('A') if char.isupper() else ord('a')

            if mode == "encrypt":
                result += chr((ord(char) - base + shift) % 26 + base)
            elif mode == "decrypt":
                result += chr((ord(char) - base - shift) % 26 + base)
        else:
            # Non-alphabet characters remain unchanged
            result += char

    return result


# User Input
message = input("Enter the message: ")
shift = int(input("Enter shift value: "))
choice = input("Type 'encrypt' or 'decrypt': ").lower()
