#ifndef __FILE_OP_ERR_H__
#define __FILE_OP_ERR_H__

enum
{
///---------�ļ�����������
    FILE_OP_NO_ERR =0,
    FILE_OP_ERR_NOT_INIT,       ///<�ļ�������û�г�ʼ��
    FILE_OP_ERR_INIT,           ///<�ļ���������ʼ������
    FILE_OP_ERR_OP_HDL,         ///<�ļ�������ָ�����
    FILE_OP_ERR_NO_MEM,         ///<�ļ������������ڴ�ʧ��
    FILE_OP_ERR_CMD,            ///<����ʶ��Ĳ�������

    FILE_OP_ERR_NO_FILE_ALLDEV, ///<�����豸��û���ļ�
    FILE_OP_ERR_NO_FILE_ONEDEV, ///<��ǰ�豸û���ļ�
    FILE_OP_ERR_OPEN_FILE,      ///<���ļ�ʧ��
    FILE_OP_ERR_OPEN_BPFILE,    ///<�򿪶ϵ��ļ�ʧ��
    FILE_OP_ERR_NUM,            ///<���ļ���Ŵ���
    FILE_OP_ERR_END_FILE,       ///<������ǰ�豸����ļ���
    FILE_OP_ERR_PRE_FILE,       ///<��һ��==0��

    FILE_OP_ERR_PTR,
    FILE_OP_ERR_LGDEV_NULL,      ///<û���豸
    FILE_OP_ERR_LGDEV_NO_FIND,   ///<û�ҵ�ָ�����߼��豸
    FILE_OP_ERR_LGDEV_FULL,
    FILE_OP_ERR_LGDEV_MOUNT,
    FILE_OP_ERR_FS,


    ERR_MUSIC_API_NULL  = 0x20,
    ERR_MUSIC_NULL_OPT,
    ERR_MUSIC_START_DEC,
    SUCC_MUSIC_START_DEC
};

#define SUCC_MUSIC_DEC  FILE_OP_NO_ERR


#endif
