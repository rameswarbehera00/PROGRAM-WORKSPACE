import time

def type_lyric(line):
    for char in line:
        print(char, end='', flush=True)
        time.sleep(0.05)
    print()

def print_lyrics():
    lyrics = [
        "Tum ab kyun hosh may aata,",
        "Sukoon yeh dil kyun paata hai,",
        "Kyun torrrin bhud jo thay madad,",
        "Ke ab yeh ishq nibhana hain,",
        "Mein morrrin tum se jo chelna,",
        "Dobara nazar milana nahi,",
        "Yeh duniya jananay mera dard,",
        "Mujhe yeh nazar kyun aata nahi,"
    ]
    
    delays = [2.0, 1.8, 2.1, 2.4, 1.7, 2.0, 1.9, 2.2]
    
    print("One last message to you 💔\n")
    time.sleep(1.5)
    
    for i, line in enumerate(lyrics):
        type_lyric(line)
        time.sleep(delays[i])

print_lyrics()
time.sleep(0.02)