import os
from openai import OpenAI
from dotenv import load_dotenv  # 需要用到这个库

# 加载 .env 文件里的环境变量
load_dotenv()

# 从环境变量中读取 Key
client = OpenAI(
    api_key=os.getenv("DEEPSEEK_API_KEY"), 
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