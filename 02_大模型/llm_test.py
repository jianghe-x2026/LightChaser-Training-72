from openai import OpenAI

# 这里填入你的 API Key
client = OpenAI(
    api_key="sk-54c1988cbc2145538f5045c0b524271b", 
    base_url="https://api.deepseek.com"
)

# 发送请求
response = client.chat.completions.create(
    model="deepseek-chat",
    messages=[
        {"role": "user", "content": "你好，请用一句话介绍你自己"}
    ]
)

# 打印回复
print(response.choices[0].message.content)