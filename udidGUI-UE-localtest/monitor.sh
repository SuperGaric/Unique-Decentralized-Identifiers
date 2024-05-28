#!/bin/bash

# 进程ID列表
pids="33315 8498 8511 8516 8530 8541 8549 8557"

# 监控间隔时间（秒）
interval=0.1

# 监控次数
count=1000

# 输出CSV文件
output_csv="process_monitor.csv"

echo "时间,PID,CPU(%),MEM(%)" > $output_csv

# 循环监控
for ((i=0; i<$count; i++))
do
    current_time=$(date +"%Y-%m-%d %H:%M:%S")
    for pid in $pids
    do
        if [ -d /proc/$pid ]
        then
            cpu=$(ps -p $pid -o %cpu --no-headers)
            mem=$(ps -p $pid -o %mem --no-headers)
            echo "$current_time,$pid,$cpu,$mem" >> $output_csv
        else
            echo "$current_time,$pid,N/A,N/A" >> $output_csv
        fi
    done
    sleep $interval
done

# 转换CSV为ODS
ssconvert $output_csv ${output_csv%.csv}.ods
echo "转换完成，文件名: ${output_csv%.csv}.ods"

