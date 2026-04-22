import requests
import os

base_url = "https://toi-coding.informatics.buu.ac.th/00-pre-toi/tasks/{}/statements/TH"

headers = {
    "Cookie": "00-pre-toi_login=2|1:0|10:1776580215|16:00-pre-toi_login|144:WyI2OXRvaXplcm8wODkwMiIsICJiY3J5cHQ6JDJhJDEwJFY3Qzc4emJ4TFl6M1NPdjlIVGEzUE9xTEFRWElTcTE4WG01MEFxZkhGak8xdFV0VTJWemlHIiwgMTc3NjU4MDIxNS41ODI1MjJd|255320df39c3d89992b87c8b36ac1bbdade32d131c30290b6ff3cfbd192fd43b; _xsrf=2|c9ade5e1|fc47e9d13a7453c5f20c59e37ca735dc|1776570784"
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