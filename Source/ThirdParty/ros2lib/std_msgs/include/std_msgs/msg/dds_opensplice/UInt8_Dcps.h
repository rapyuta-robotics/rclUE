#ifndef _H_23A0F8257DD505446C1EC91056D88C9C_UInt8_DCPS_H_
#define _H_23A0F8257DD505446C1EC91056D88C9C_UInt8_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "UInt8_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class UInt8_TypeSupportInterface;

            typedef UInt8_TypeSupportInterface * UInt8_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < UInt8_TypeSupportInterface> UInt8_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < UInt8_TypeSupportInterface> UInt8_TypeSupportInterface_out;


            class UInt8_DataWriter;

            typedef UInt8_DataWriter * UInt8_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < UInt8_DataWriter> UInt8_DataWriter_var;
            typedef DDS_DCPSInterface_out < UInt8_DataWriter> UInt8_DataWriter_out;


            class UInt8_DataReader;

            typedef UInt8_DataReader * UInt8_DataReader_ptr;
            typedef DDS_DCPSInterface_var < UInt8_DataReader> UInt8_DataReader_var;
            typedef DDS_DCPSInterface_out < UInt8_DataReader> UInt8_DataReader_out;


            class UInt8_DataReaderView;

            typedef UInt8_DataReaderView * UInt8_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < UInt8_DataReaderView> UInt8_DataReaderView_var;
            typedef DDS_DCPSInterface_out < UInt8_DataReaderView> UInt8_DataReaderView_out;

            struct UInt8_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < UInt8_, struct UInt8_Seq_uniq_> UInt8_Seq;
            typedef DDS_DCPSSequence_var < UInt8_Seq> UInt8_Seq_var;
            typedef DDS_DCPSSequence_out < UInt8_Seq> UInt8_Seq_out;

            class  UInt8_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef UInt8_TypeSupportInterface_ptr _ptr_type;
                typedef UInt8_TypeSupportInterface_var _var_type;

                static UInt8_TypeSupportInterface_ptr _duplicate (UInt8_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt8_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static UInt8_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt8_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt8_TypeSupportInterface_ptr _this () { return this; }


            protected:
                UInt8_TypeSupportInterface () {};
                ~UInt8_TypeSupportInterface () {};
            private:
                UInt8_TypeSupportInterface (const UInt8_TypeSupportInterface &);
                UInt8_TypeSupportInterface & operator = (const UInt8_TypeSupportInterface &);
            };

            class  UInt8_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef UInt8_DataWriter_ptr _ptr_type;
                typedef UInt8_DataWriter_var _var_type;

                static UInt8_DataWriter_ptr _duplicate (UInt8_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt8_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static UInt8_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt8_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt8_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const UInt8_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const UInt8_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const UInt8_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const UInt8_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const UInt8_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const UInt8_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const UInt8_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const UInt8_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const UInt8_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const UInt8_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (UInt8_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UInt8_& instance_data) = 0;

            protected:
                UInt8_DataWriter () {};
                ~UInt8_DataWriter () {};
            private:
                UInt8_DataWriter (const UInt8_DataWriter &);
                UInt8_DataWriter & operator = (const UInt8_DataWriter &);
            };

            class  UInt8_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef UInt8_DataReader_ptr _ptr_type;
                typedef UInt8_DataReader_var _var_type;

                static UInt8_DataReader_ptr _duplicate (UInt8_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt8_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static UInt8_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt8_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt8_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UInt8_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UInt8_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UInt8_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UInt8_& instance) = 0;

            protected:
                UInt8_DataReader () {};
                ~UInt8_DataReader () {};
            private:
                UInt8_DataReader (const UInt8_DataReader &);
                UInt8_DataReader & operator = (const UInt8_DataReader &);
            };

            class  UInt8_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef UInt8_DataReaderView_ptr _ptr_type;
                typedef UInt8_DataReaderView_var _var_type;

                static UInt8_DataReaderView_ptr _duplicate (UInt8_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt8_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static UInt8_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt8_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt8_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UInt8_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UInt8_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UInt8_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UInt8_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UInt8_& instance) = 0;

            protected:
                UInt8_DataReaderView () {};
                ~UInt8_DataReaderView () {};
            private:
                UInt8_DataReaderView (const UInt8_DataReaderView &);
                UInt8_DataReaderView & operator = (const UInt8_DataReaderView &);
            };
        }

    }

}

#endif
