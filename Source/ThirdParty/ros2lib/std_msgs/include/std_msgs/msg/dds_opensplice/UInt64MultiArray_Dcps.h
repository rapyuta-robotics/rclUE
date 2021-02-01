#ifndef _H_B674CF1A64C7479C869057979E916B10_UInt64MultiArray_DCPS_H_
#define _H_B674CF1A64C7479C869057979E916B10_UInt64MultiArray_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "UInt64MultiArray_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class UInt64MultiArray_TypeSupportInterface;

            typedef UInt64MultiArray_TypeSupportInterface * UInt64MultiArray_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < UInt64MultiArray_TypeSupportInterface> UInt64MultiArray_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < UInt64MultiArray_TypeSupportInterface> UInt64MultiArray_TypeSupportInterface_out;


            class UInt64MultiArray_DataWriter;

            typedef UInt64MultiArray_DataWriter * UInt64MultiArray_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < UInt64MultiArray_DataWriter> UInt64MultiArray_DataWriter_var;
            typedef DDS_DCPSInterface_out < UInt64MultiArray_DataWriter> UInt64MultiArray_DataWriter_out;


            class UInt64MultiArray_DataReader;

            typedef UInt64MultiArray_DataReader * UInt64MultiArray_DataReader_ptr;
            typedef DDS_DCPSInterface_var < UInt64MultiArray_DataReader> UInt64MultiArray_DataReader_var;
            typedef DDS_DCPSInterface_out < UInt64MultiArray_DataReader> UInt64MultiArray_DataReader_out;


            class UInt64MultiArray_DataReaderView;

            typedef UInt64MultiArray_DataReaderView * UInt64MultiArray_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < UInt64MultiArray_DataReaderView> UInt64MultiArray_DataReaderView_var;
            typedef DDS_DCPSInterface_out < UInt64MultiArray_DataReaderView> UInt64MultiArray_DataReaderView_out;

            struct UInt64MultiArray_Seq_uniq_ {};
            typedef DDS_DCPSUVLSeq < UInt64MultiArray_, struct UInt64MultiArray_Seq_uniq_> UInt64MultiArray_Seq;
            typedef DDS_DCPSSequence_var < UInt64MultiArray_Seq> UInt64MultiArray_Seq_var;
            typedef DDS_DCPSSequence_out < UInt64MultiArray_Seq> UInt64MultiArray_Seq_out;

            class  UInt64MultiArray_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef UInt64MultiArray_TypeSupportInterface_ptr _ptr_type;
                typedef UInt64MultiArray_TypeSupportInterface_var _var_type;

                static UInt64MultiArray_TypeSupportInterface_ptr _duplicate (UInt64MultiArray_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt64MultiArray_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static UInt64MultiArray_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt64MultiArray_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt64MultiArray_TypeSupportInterface_ptr _this () { return this; }


            protected:
                UInt64MultiArray_TypeSupportInterface () {};
                ~UInt64MultiArray_TypeSupportInterface () {};
            private:
                UInt64MultiArray_TypeSupportInterface (const UInt64MultiArray_TypeSupportInterface &);
                UInt64MultiArray_TypeSupportInterface & operator = (const UInt64MultiArray_TypeSupportInterface &);
            };

            class  UInt64MultiArray_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef UInt64MultiArray_DataWriter_ptr _ptr_type;
                typedef UInt64MultiArray_DataWriter_var _var_type;

                static UInt64MultiArray_DataWriter_ptr _duplicate (UInt64MultiArray_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt64MultiArray_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static UInt64MultiArray_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt64MultiArray_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt64MultiArray_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const UInt64MultiArray_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const UInt64MultiArray_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const UInt64MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const UInt64MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const UInt64MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const UInt64MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const UInt64MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const UInt64MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const UInt64MultiArray_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const UInt64MultiArray_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (UInt64MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UInt64MultiArray_& instance_data) = 0;

            protected:
                UInt64MultiArray_DataWriter () {};
                ~UInt64MultiArray_DataWriter () {};
            private:
                UInt64MultiArray_DataWriter (const UInt64MultiArray_DataWriter &);
                UInt64MultiArray_DataWriter & operator = (const UInt64MultiArray_DataWriter &);
            };

            class  UInt64MultiArray_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef UInt64MultiArray_DataReader_ptr _ptr_type;
                typedef UInt64MultiArray_DataReader_var _var_type;

                static UInt64MultiArray_DataReader_ptr _duplicate (UInt64MultiArray_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt64MultiArray_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static UInt64MultiArray_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt64MultiArray_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt64MultiArray_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UInt64MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UInt64MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UInt64MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UInt64MultiArray_& instance) = 0;

            protected:
                UInt64MultiArray_DataReader () {};
                ~UInt64MultiArray_DataReader () {};
            private:
                UInt64MultiArray_DataReader (const UInt64MultiArray_DataReader &);
                UInt64MultiArray_DataReader & operator = (const UInt64MultiArray_DataReader &);
            };

            class  UInt64MultiArray_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef UInt64MultiArray_DataReaderView_ptr _ptr_type;
                typedef UInt64MultiArray_DataReaderView_var _var_type;

                static UInt64MultiArray_DataReaderView_ptr _duplicate (UInt64MultiArray_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt64MultiArray_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static UInt64MultiArray_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt64MultiArray_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt64MultiArray_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UInt64MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UInt64MultiArray_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UInt64MultiArray_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UInt64MultiArray_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UInt64MultiArray_& instance) = 0;

            protected:
                UInt64MultiArray_DataReaderView () {};
                ~UInt64MultiArray_DataReaderView () {};
            private:
                UInt64MultiArray_DataReaderView (const UInt64MultiArray_DataReaderView &);
                UInt64MultiArray_DataReaderView & operator = (const UInt64MultiArray_DataReaderView &);
            };
        }

    }

}

#endif
