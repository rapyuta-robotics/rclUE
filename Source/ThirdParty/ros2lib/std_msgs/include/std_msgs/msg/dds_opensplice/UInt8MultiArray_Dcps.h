#ifndef _H_70E48D10D4859CB3DADBC91E83BD2055_UInt8MultiArray_DCPS_H_
#define _H_70E48D10D4859CB3DADBC91E83BD2055_UInt8MultiArray_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "UInt8MultiArray_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class UInt8MultiArray_TypeSupportInterface;

            typedef UInt8MultiArray_TypeSupportInterface * UInt8MultiArray_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < UInt8MultiArray_TypeSupportInterface> UInt8MultiArray_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < UInt8MultiArray_TypeSupportInterface> UInt8MultiArray_TypeSupportInterface_out;


            class UInt8MultiArray_DataWriter;

            typedef UInt8MultiArray_DataWriter * UInt8MultiArray_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < UInt8MultiArray_DataWriter> UInt8MultiArray_DataWriter_var;
            typedef DDS_DCPSInterface_out < UInt8MultiArray_DataWriter> UInt8MultiArray_DataWriter_out;


            class UInt8MultiArray_DataReader;

            typedef UInt8MultiArray_DataReader * UInt8MultiArray_DataReader_ptr;
            typedef DDS_DCPSInterface_var < UInt8MultiArray_DataReader> UInt8MultiArray_DataReader_var;
            typedef DDS_DCPSInterface_out < UInt8MultiArray_DataReader> UInt8MultiArray_DataReader_out;


            class UInt8MultiArray_DataReaderView;

            typedef UInt8MultiArray_DataReaderView * UInt8MultiArray_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < UInt8MultiArray_DataReaderView> UInt8MultiArray_DataReaderView_var;
            typedef DDS_DCPSInterface_out < UInt8MultiArray_DataReaderView> UInt8MultiArray_DataReaderView_out;

            struct UInt8MultiArray_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < UInt8MultiArray_, struct UInt8MultiArray_Seq_uniq_> UInt8MultiArray_Seq;
            typedef DDS_DCPSSequence_var < UInt8MultiArray_Seq> UInt8MultiArray_Seq_var;
            typedef DDS_DCPSSequence_out < UInt8MultiArray_Seq> UInt8MultiArray_Seq_out;

            class  UInt8MultiArray_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef UInt8MultiArray_TypeSupportInterface_ptr _ptr_type;
                typedef UInt8MultiArray_TypeSupportInterface_var _var_type;

                static UInt8MultiArray_TypeSupportInterface_ptr _duplicate (UInt8MultiArray_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt8MultiArray_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static UInt8MultiArray_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt8MultiArray_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt8MultiArray_TypeSupportInterface_ptr _this () { return this; }


            protected:
                UInt8MultiArray_TypeSupportInterface () {};
                ~UInt8MultiArray_TypeSupportInterface () {};
            private:
                UInt8MultiArray_TypeSupportInterface (const UInt8MultiArray_TypeSupportInterface &);
                UInt8MultiArray_TypeSupportInterface & operator = (const UInt8MultiArray_TypeSupportInterface &);
            };

            class  UInt8MultiArray_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef UInt8MultiArray_DataWriter_ptr _ptr_type;
                typedef UInt8MultiArray_DataWriter_var _var_type;

                static UInt8MultiArray_DataWriter_ptr _duplicate (UInt8MultiArray_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt8MultiArray_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static UInt8MultiArray_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt8MultiArray_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt8MultiArray_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const UInt8MultiArray_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const UInt8MultiArray_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const UInt8MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const UInt8MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const UInt8MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const UInt8MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const UInt8MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const UInt8MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const UInt8MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const UInt8MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (UInt8MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UInt8MultiArray_& instance_data) = 0;

            protected:
                UInt8MultiArray_DataWriter () {};
                ~UInt8MultiArray_DataWriter () {};
            private:
                UInt8MultiArray_DataWriter (const UInt8MultiArray_DataWriter &);
                UInt8MultiArray_DataWriter & operator = (const UInt8MultiArray_DataWriter &);
            };

            class  UInt8MultiArray_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef UInt8MultiArray_DataReader_ptr _ptr_type;
                typedef UInt8MultiArray_DataReader_var _var_type;

                static UInt8MultiArray_DataReader_ptr _duplicate (UInt8MultiArray_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt8MultiArray_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static UInt8MultiArray_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt8MultiArray_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt8MultiArray_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UInt8MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UInt8MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UInt8MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UInt8MultiArray_& instance) = 0;

            protected:
                UInt8MultiArray_DataReader () {};
                ~UInt8MultiArray_DataReader () {};
            private:
                UInt8MultiArray_DataReader (const UInt8MultiArray_DataReader &);
                UInt8MultiArray_DataReader & operator = (const UInt8MultiArray_DataReader &);
            };

            class  UInt8MultiArray_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef UInt8MultiArray_DataReaderView_ptr _ptr_type;
                typedef UInt8MultiArray_DataReaderView_var _var_type;

                static UInt8MultiArray_DataReaderView_ptr _duplicate (UInt8MultiArray_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt8MultiArray_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static UInt8MultiArray_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt8MultiArray_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt8MultiArray_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UInt8MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UInt8MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UInt8MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UInt8MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UInt8MultiArray_& instance) = 0;

            protected:
                UInt8MultiArray_DataReaderView () {};
                ~UInt8MultiArray_DataReaderView () {};
            private:
                UInt8MultiArray_DataReaderView (const UInt8MultiArray_DataReaderView &);
                UInt8MultiArray_DataReaderView & operator = (const UInt8MultiArray_DataReaderView &);
            };
        }

    }

}

#endif
