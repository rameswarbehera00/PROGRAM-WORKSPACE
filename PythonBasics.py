message = input()
updated_message = message

for i in updated_message:
    if i.isdigit():
        message = message.strip(i)

print(message)   