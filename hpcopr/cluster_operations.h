/*
 * Copyright (C) 2022-present Shanghai HPC-NOW Technologies Co., Ltd.
 * This code is distributed under the license: MIT License
 * Originally written by Zhenrong WANG
 * mailto: zhenrongwang@live.com | wangzhenrong@hpc-now.com
 */

#ifndef CLUSTER_OPERATIONS_H
#define CLUSTER_OPERATIONS_H

int switch_to_cluster(char* target_cluster_name);
int glance_clusters(char* target_cluster_name, char* crypto_keyfile);
int remove_cluster(char* target_cluster_name, char*crypto_keyfile, char* force_flag);
int refresh_cluster(char* target_cluster_name, char* crypto_keyfile, char* force_flag);
int create_new_cluster(char* crypto_keyfile, char* cluster_name, char* cloud_ak, char* cloud_sk, char* echo_flag);
int rotate_new_keypair(char* workdir, char* cloud_ak, char* cloud_sk, char* crypto_keyfile, char* echo_flag);
int cluster_destroy(char* workdir, char* crypto_keyfile, char* force_flag);
int delete_compute_node(char* workdir, char* crypto_keyfile, char* param);
int add_compute_node(char* workdir, char* crypto_keyfile, char* add_number_string);
int shutdown_compute_nodes(char* workdir, char* crypto_keyfile, char* param);
int turn_on_compute_nodes(char* workdir, char* crypto_keyfile, char* param);
int check_reconfigure_list(char* workdir);
int reconfigure_compute_node(char* workdir, char* crypto_keyfile, char* new_config, char* htflag);
int reconfigure_master_node(char* workdir, char* crypto_keyfile, char* new_config);
int nfs_volume_up(char* workdir, char* crypto_keyfile, char* new_volume);
int cluster_sleep(char* workdir, char* crypto_keyfile);
int cluster_wakeup(char* workdir, char* crypto_keyfile, char* option);
int get_default_conf(char* cluster_name, char* crypto_keyfile, int edit_flag);
int edit_configuration_file(char* cluster_name, char* crypto_keyfile);
int remove_conf(char* cluster_name);
int rebuild_nodes(char* workdir, char* crypto_keyfile, char* option);
int view_run_log(char* workdir, char* stream, char* run_option, char* view_option, char* export_dest);
int switch_cluster_payment(char* cluster_name, char* new_payment_method, char* crypto_keyfile);

#endif