import requests
import os

base_url = "https://toi-coding.informatics.buu.ac.th/00-pre-toi/tasks/{}/statements/TH"

headers = {
    "Cookie": ""
}

tasks = []

for i in range(1, 71):
    tasks.append(f"A1-{i:03d}")
for i in range(1, 63):
    tasks.append(f"A2-{i:03d}")
for i in range(1, 29):
    tasks.append(f"A3-{i:03d}")

for task in tasks:
    url = base_url.format(task)
    folder = task.split("-")[0]
    os.makedirs(folder, exist_ok=True)

    response = requests.get(url, headers=headers)
    if response.status_code == 200:
        with open(f"{folder}/{task}.pdf", "wb") as f:
            f.write(response.content)
        print(f"✅ {task}")
    else:
        print(f"❌ {task} — {response.status_code}")

print("เสร็จแล้ว!")