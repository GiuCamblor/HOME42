 find . -type f -iname ".sh" | ls | awk -F . '{print $1}'
